#include <iostream>
using namespace std;
struct List{
    int data;
    List* next;
    List* prev;
};

List* make(int size){
		if(size==0){
			cout<<"Cant create empty list"<<endl;  					
			return 0;
		}			
		List* first, *p;
		first = NULL;
		p = new List;
		cout<<"Enter fist element:";
		cin>>p->data;
		first =p;
		p->next=NULL;
		p->prev=NULL;
		for(int i=2;i<=size;i++){
			List* h=new List;
			List* q =p;
			p->next=h;
			p=p->next;
			cout<<"Enter "<<i<<" element:";
			cin>>p->data;
			p->next=NULL;
			p->prev=q;
		}
		return first;
}		

void del(List* &first){
		List*p = first;
		while(p->data != (p->data %2 == 1)){
				List* q= first;
				first = p-> next;
				delete q;
				p=first;
				p->prev = NULL;
		}
		while(p->next!=NULL){
				if(p->next->data==(p->data %2 ==1)){
					List* q = p->next;
					List* d = p->next->prev;
					p->next=p->next->next;
					p->next->prev=d;
					delete q;
				}
				else p=p->next;
		}
}
void print(List* first){
		if(first==NULL){
				cout<<"Empty list"<<endl;
		}else{
				List* p = first;
				while(p != NULL){
					cout<< p-> data<<"|";
					p=p->next;
				}
				cout<<endl;
		}
}

int main(){
		int size;
		cout<<"Enter list size:";
		cin>>size;

		List* list=make(size);
		cout<<"List: |";
		print(list);
		del(list);
		print(list);
		return 0;
}
















