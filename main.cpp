#include <iostream>
using namespace std;

struct OrderTree{
	OrderTree *left;
	OrderTree *front;
	OrderTree *right;
	char name;
};

//liscie
OrderTree E = {NULL, NULL, NULL, 'E'};
OrderTree F = {NULL, NULL, NULL, 'F'};
OrderTree G = {NULL, NULL, NULL, 'G'};
OrderTree H = {NULL, NULL, NULL, 'H'};
OrderTree I = {NULL, NULL, NULL, 'I'};
OrderTree J = {NULL, NULL, NULL, 'J'};

//ojcowie
OrderTree B = {&E, NULL, &F, 'B'};
OrderTree C = {&G, &H, &I, 'C'};
OrderTree D = {NULL, NULL, &J, 'D'};

//korzen

void inorder(OrderTree *a){
	if(a){
		inorder(a->left);
		inorder(a->front);
		cout<<a->name<<" ";
		inorder(a->right);
	}
}
OrderTree A = {&B, &C, &D, 'A'};
int main(){
	ios_base::sync_with_stdio(0);
	
	inorder(&A);
	cout<<'\n';
} 
