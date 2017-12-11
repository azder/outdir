#include <fstream.h>
#define INFINITY 32767
#define MAXNODES 50
#define MAXNAME 20
#define TRUE 1
#define FALSE 0

struct line_t {
	int from;
	int to;
	int weight;
};


line_t line[MAXNODES]={0};
int distance[MAXNODES]={0};
int path[MAXNODES]={0};
int included[MAXNODES]={0};
int numnodes,numlines;
char fnode[20], tnode[20];
int paths[MAXNODES]={0};


void findpath();
void initialize(int s,int t);
void loadnodes();
int minnode();
int weight(int s,int j);
int allincluded();

void main(){
loadnodes();
findpath();
}

void loadnodes(){
	ifstream filein("spath.in",ios::in);
	filein>>numnodes;
	for(int i = 0;i<numnodes;i++)
			filein>>line[i].from>>line[i].to>>line[i].weight;
	filein.close();
}
/*	S% = 0
	T% = 0
	' Convert city to number
	For X% = 1 To NumCities%
			Get #2, X%, GetCity
			Test$ = UCase$(LTrim$(Trim$(GetCity)))
			If UCase$(LTrim$(RTrim$(Source.Text))) = Test$ Then S% = X%
			If UCase$(LTrim$(RTrim$(Target.Text))) = Test$ Then T% = X%
			If (S% <> 0) And (T% <> 0) Then Exit For
	Next
	If (S% = 0) Or (T% = 0) Then
			Beep
			MsgBox "*****  Location(s) not found **** " + IIf(S% = 0, Chr(13) _
					 + Source.Text, "") + IIf(T% = 0, Chr(13) + Target.Text, "")
			Exit Sub
	End If
*/


void findpath(){
	int s=0,t=0,tmp,j,i;
	initialize(s,t);
	do{
			j = minnode();
			included[j] = TRUE;
			for(i = 0;i<numnodes;i++){
					if(included[i] == FALSE){
							if(((tmp=weight(j,i))< INFINITY) &&
							(distance[j] < INFINITY)){
	                if(distance[j] + tmp < distance[i]){
	                  distance[i] = distance[j] +tmp;
											path[i] = j;
	                }
	            }
	        }
	    }
	}while(!allincluded());
	j = t;
	int k=0;
	paths[k++] = j;
		do{
				i = path[j];
				paths[k++]=i;
				j=i;
				if(i == -1){
						cout<<"No Path Possible\n";
						return;
				}
		}while(i != path[i]);
		for(int ki=0;ki<k;ki++)
			cout<<paths[ki]<<' ';
		cout<<endl<<distance[t]<<endl;
}
/*	Do While Location > 0
	    T% = Val(Mid$(sPath$, 1, Location - 1))
	    Get #2, T%, GetCity
	    List1.AddItem "---- " & GetCity
	    sPath$ = Mid$(sPath$, Location + 1)
	    Location = InStr(sPath$, ",")
	Loop

	T% = Val(sPath$)
	Get #2, T%, GetCity
	List1.AddItem "---- " & GetCity
	Mileage.Caption = Distance(T%)
	Source.SetFocus
*/


int allincluded(){
	int retval = TRUE;            
	for( int i = 0;i< numnodes;i++){
		if (!included[i]) retval=FALSE;
		break;
	}
	return retval;
}

void initialize(int s,int ){
	int i,w;
	for(i = 0;i<numnodes;i++){
	    w = weight(s,i);
	    distance[i] =w;
	    if(s == i)
	        included[i] = TRUE;
	    else
	        included[i] = FALSE;
	    if(w>= 0 && w != INFINITY)
	        path[i] = s;
	    else
	        path[i] = -1;
	}
}

int minnode(){
	int temp,i, min=INFINITY,node;
	for(i = 0;i<numnodes;i++){
			if(!included[i]){
	        temp =i;
	        if(distance[i] < min){
	            min = distance[i];
	            node =i;
	        }
	    }
	}	
	if(min == INFINITY) node=temp;
	return node;
}

int weight(int s,int j){
	int retval=0,i;
	if(j ==s) return 0;
	for(i = 0;i < sizeof(line) / sizeof(line[0]);i++){
			if ((line[i].from == s && line[i].to == j) ||
				 (line[i].from == j && line[i].to == s)){
					retval = line[i].weight;
					break;
			}
	}
	if(!retval) retval = INFINITY;
	return retval;
}