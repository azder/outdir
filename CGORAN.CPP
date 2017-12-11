#include <iostream.h>
class goran {
	public:
	void zdravo(void);
};
void goran::zdravo(void){
	cout <<"Zdravo\n";
}

void main(void){
	goran g;
	g.zdravo();
}