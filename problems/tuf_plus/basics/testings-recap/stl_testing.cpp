#include <iostream>
#include <cmath>
#include <list>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <utility>
#include <iterator>
using namespace std;


void explainPair(){
    
    // Pair Class 
    pair <int, int> pr1 = {2,8};
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair <int, char> pr2 = {2,'a'};
    cout<<pr2.first<<" "<<pr2.second<<endl;

    // Pairs can be nested
}

void explainVector(){

    //Vector Class
    vector <int> v1 = {1,2,3,4,5};
    
    //Insertion
    v1.push_back(6);
    v1.push_back(7);
    cout<< v1.size() <<endl;

    // //Iterative - Verbose
    // for (int i = 0; i < v1.size(); i++){
    //     cout<<v1[i]<<" ";
    // }

    // cout<<endl;

    // // Declare Iterator on the vector object (iterator maps to object)
    // vector<int>::iterator beginItr = v1.begin();
    // //Will point to after the last element
    // vector<int>::iterator endItr = v1.end();
    // for(vector<int>::iterator itr = beginItr; itr != endItr; itr++){
    //     cout<<*itr<<" ";
    // }

    // cout<<endl;

    // //This can be shortened, using auto keyword
    // auto beginItr2 = v1.begin();
    // auto endItr2 = v1.end();
    // for(auto itr = beginItr2; itr != endItr2; itr++){
    //     cout<<*itr<<" ";
    // }

    // cout<<endl;
    // //Further shortening
    // for(auto itr = v1.begin(); itr != v1.end(); itr++){
    //     //Dereference the iterator to get the value
    //     cout<<*itr<<" ";
    // }

    // cout<<endl;

    // //Faster way to iterate
    // for(auto val : v1){
    //     cout<<val<<" ";
    // }


    // cout<<endl;

    // //Reverse Iterator
    // // Key- the end iterator now points to before the first element
    // vector<int>::reverse_iterator rbeginItr = v1.rbegin();
    // vector<int>::reverse_iterator rendItr = v1.rend();
    // for(vector<int>::reverse_iterator itr = rbeginItr; itr != rendItr; itr++){
    //     cout<<*itr<<" ";
    // }

    // //Take a particular range
    // cout<<endl;
    // vector<int>::iterator beginItr3 = v1.begin();
    // vector<int>::iterator endItr3 = v1.begin() + 3;
    // for(auto itr = beginItr3; itr != endItr3; itr++){
    //     cout<<*itr<<" ";
    // }

    // //Erasing element
    // cout<<endl;
    // v1.erase(v1.begin() + 2);
    // for(auto val : v1){
    //     cout<<val<<" ";
    // }

    // //Erasing a range of elements
    // cout<<endl;
    // v1.erase(v1.begin()+2, v1.begin()+4);
    // for(auto val : v1){
    //     cout<<val<<" ";
    // }

    // v1.clear();
    // cout<<endl;
    // cout<<v1.size()<<endl;

    //Swapping Vector at a given position
    vector<int> v2 = {10,20,30,40,50};
    vector<int> v3 = {100,200,300,400,500};
    v2.swap(v3);
    for(auto val : v2){
        cout<<val<<" ";
    }

}

void explainList(){
    
    // List is also a container
    list <int> l1 = {1,2,3,4,5};
    l1.push_back(6);
    l1.push_back(7);


    //Key - We can use push-front like a Data Structure List
    //Vectors do not have push_front
    l1.push_front(0);
    cout<<l1.size()<<endl;

    //Iterate - auto
    for(auto val: l1){
        cout<<val<<" ";
    }

}

void explainDeque(){
    // Lists and Deque use LinkedLists for underlying implementation
    queue<int> q1;
    q1.push(103);  
    q1.push(203);
    q1.push(303);
    q1.push(400);
    q1.push(502);

    //Queue has concept of front
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<q1.front()<<endl;

}

void explainPriorityQueue(){

    //Priority Queue - works on a Heap Implementation
    priority_queue<int> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(40);
    pq1.push(50);

    //Priority Queue stores elements in order of magnitude
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;

    //Show All
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }

    //Min Heap
    //Comparator - greater<int> - will store elements in ascending order
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);
    pq2.push(20);
    pq2.push(30);

    cout<<pq2.top()<<endl;
}

void explainStack(){    
    //LIFO
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.pop();

    cout<<endl<< s1.top()<<endl;
}

void explainSet(){
    //Set - Unique Elements
    set<int> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);

    //Iterate
    for(auto val : s1){
        cout<<val<<" ";
    }

    //Find
    auto itr = s1.find(30);
    if(itr != s1.end()){
        cout<<endl<<"Found"<<endl;
    }

    //Erase
    s1.erase(30);
    for(auto val : s1){
        cout<<val<<" ";
    }

    //Count
    cout<<endl<<s1.count(40)<<endl;
}






int main() {
    
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainPriorityQueue();
    explainSet();
    return 0;
}
