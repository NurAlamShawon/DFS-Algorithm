#include<iostream>
#include<vector>
using namespace std;
vector<int>List[100];
int c[100];
int d[100];
int f[100];
int per[100];
int time=0;

void dfs_visit(int ini){

    int u=ini;
    c[u]=1;
    time++;
    d[u]=time;
   for(auto x:List[u]){
    if(c[x]==0){

        per[x]= u;
        dfs_visit(x);


    }
   }
   time++;
   f[u]=time;
   c[u]=2;



}

int main(){
    int edges;
    cout<<"enter the total number of edges ";
    cin>>edges;

for(int i=0;i<100;i++)
{   c[i]=0;
    d[i]=9999;
    f[i]=9999;
    per[i]=9999;
}
cout<<" enter the connected edges ";
for(int i=0;i<edges;i++ ){
        int u,v;
    cin>>u>>v;
   List[u].push_back(v);

}

int vertex;
cout<<"enter the number of vertex ";
cin>>vertex;
for(int i =0;i<vertex;i++){
if(c[i]==0){
dfs_visit(i);}
}

cout<<"the color are  ";
for(int i=0;i<vertex;i++){
cout<<c[i]<<" ";
}cout<<endl;
cout<<"the discover time are  ";
for(int i=0;i<vertex;i++){
cout<<d[i]<<" ";
}cout<<endl;
cout<<"the finishing time are  ";
for(int i=0;i<vertex;i++){
cout<<f[i]<<" ";
}cout<<endl;
cout<<"the parent are  ";
for(int i=0;i<vertex;i++){
cout<<per[i]<<" ";
}cout<<endl;




}
