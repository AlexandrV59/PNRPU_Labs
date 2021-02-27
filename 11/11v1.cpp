#include <iostream>
#include <string>
using namespace std;
//initialization structure
struct List{
char data;
List* next;
};
//input function
List* add(int size){
if(size==0){
cout«"Empty, error:"«endl;
return 0;
}
List* first, *p;
first = NULL;//first -> null
cout«"Enter element:";
p=new List;//Memory for element
cin»p->data;//Enter value
first=p;
for(int i=2;i<=size;i++){
List* h = new List;//Memory for new element
p->next = h;//Create link for new element
p=p->next;//Move to a new element
cout«"Enter element:";
cin»p->data;//Enter value
p->next=NULL;//Last elem -> NULL,
}
return first;//link to first element
}
//output function
void print(List*first){
if(first==NULL){
cout«"Empty list"«endl;
}else{
List* p=first;//link for first element
while(p!=NULL){
cout«p->data«" ";
p=p->next;//link to next element #NULL
}
cout«endl;
}
}
//add function
void add(List* &first, int n){
List* p = first;
List* h = new List;
cin » h->data;
h->next=p;
first=h;
while(p->next!=NULL){
List* h = new List;
cin » h->data;
h->next = p->next;
p->next = h;
if(p->next->next!=NULL){
p=p->next->next;
}else p=p->next;
}
}

//main loop
int main(){
int size;
cout«"Enter list size: ";
cin»size;
//input function
List* list=add(size);
cout«"Your list: "«endl;
//output function
print(list);
//add function
add(list,size);
print(list);
return 0;
}
