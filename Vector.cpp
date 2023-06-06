#include<bits/stdc++.h>
using namespace std;
int main()
{
      //vector declared

      vector<int> v;
      //vector assigned
     v.push_back(10);//v[0]=10
      v.push_back(20);//v[1]=20
      v.push_back(30);//v[2]=30
      v.push_back(40);//v[3]=40
      v.push_back(50);//v[4]=50
      
      //How to print vector values
      cout<<v[0]<<endl;
      cout<<v[1]<<endl;
      cout<<v[2]<<endl;
      cout<<v[3]<<endl;
      cout<<v[4]<<endl;
      //How to print vector values
      cout<<v.at(0)<<endl;
      cout<<v.at(1)<<endl;
      cout<<v.at(2)<<endl;
      cout<<v.at(3)<<endl;
      cout<<v.at(4)<<endl;
      //at function is used to access the vector values

      //How to print vector size
      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }
      //how to print vector front value
      cout<<v.front()<<endl;
      //how to print vector back value
      cout<<v.back()<<endl;
      //how clear the vector
     v.clear();
      cout<<v.size()<<endl;
      //how to check vector is empty or not
      if(v.empty())
      {
            cout<<"Vector is empty"<<endl;
      }
      else
      {
            cout<<"Vector is not empty"<<endl;
      }
      //pop_back function is used to delete the last element of the vector
      v.pop_back();
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }
      //erase function is used to delete the element of the vector
      v.erase(v.begin()+3,v.begin()+4);
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }
      
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }
      //insert function is used to insert the element of the vector
      v.insert(v.begin()+3,35);
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }
      v.insert(v.begin()+3,3,38);
      for(int i=0;i<v.size();i++)
      {
            cout<<v[i]<<endl;
      }

      //swap function is used to swap the element of the vector
      vector<int> v1;
      v1.push_back(100);
      v1.push_back(200);
      v1.push_back(300);
      v1.push_back(400);
      cout<<"Before swap"<<endl;
      for(int i=0;i<v1.size();i++)
      {
            cout<<v1[i]<<endl;
      }
      vector<int> v2;
      v2.push_back(1000);
      v2.push_back(2000);
      v2.push_back(3000);
      v2.push_back(4000);
      cout<<"Before swap"<<endl;
      for(int i=0;i<v2.size();i++)
      {
            cout<<v2[i]<<endl;
      }
      swap(v1,v2);
      cout<<"After swap"<<endl;
      for(int i=0;i<v1.size();i++)
      {
            cout<<v1[i]<<endl;
      }
      cout<<"After swap"<<endl;
      swap(v2,v1);
      for(int i=0;i<v2.size();i++)
      {
            cout<<v2[i]<<endl;
      }
      //How to sort the vector
      vector<int> v3;
      v3.push_back(10);
      v3.push_back(2);
      v3.push_back(3440);
      v3.push_back(440);
      v3.push_back(50);
      cout<<"Before sort"<<endl;
      for(int i=0;i<v3.size();i++)
      {
            cout<<v3[i]<<endl;
      }
      cout<<"After sort"<<endl;
      sort(v3.begin(),v3.end());
      for(int i=0;i<v3.size();i++)
      {
            cout<<v3[i]<<endl;
      }
      //How to reverse the vector
      cout<<"Before reverse"<<endl;
      for(int i=0;i<v3.size();i++)
      {
            cout<<v3[i]<<endl;
      }
      reverse(v3.begin(),v3.end());
      for(int i=0;i<v3.size();i++)
      {
            cout<<v3[i]<<endl;
      }
      //How to find the maximum element of the vector
      cout<<"Maximum element of the vector"<<endl;
      cout<<*max_element(v3.begin(),v3.end())<<endl;
      //How to find the minimum element of the vector
      cout<<"Minimum element of the vector"<<endl;
      cout<<*min_element(v3.begin(),v3.end())<<endl;
      //How to find the sum of the vector
      cout<<"Sum of the vector"<<endl;
      cout<<accumulate(v3.begin(),v3.end(),0)<<endl;
      //How to find the count of the vector
      cout<<"Count of the vector"<<endl;
      cout<<count(v3.begin(),v3.end(),10)<<endl;
      //How to find the find the index of the vector
      cout<<"Index of the vector"<<endl;
      cout<<find(v3.begin(),v3.end(),10)-v3.begin()<<endl;  

      //iteration of the vector
      vector<int> v4;
      v4.push_back(1);
      v4.push_back(290);
      v4.push_back(300);
      v4.push_back(408);
      v4.push_back(508);
      //declaration of the iterator
      vector<int>::iterator it;
      it=v4.begin()+4;
      cout<<*it<<endl;
      for(it=v4.begin();it!=v4.end();it++)
      {
            cout<<*it<<endl;
      }


      return 0;
}

// Vector link :