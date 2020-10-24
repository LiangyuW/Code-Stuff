#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <fstream>
#include <set>
#include <unordered_map>
#include <map>

bool isIsomorphic(string s, string t){
    vector<int> smap(256, 0);
    vector<int> tmap(256, 0);
    int lens = s.size();
    int lent = t.size();
    if(lens!=lent){
        return false;
    }
    for(int i = 0; i<s.size(); i++){
        if(smap[s[i]]!=tmap[t[i]]){
            return false;
        }
        smap[s[i]]=i+1;
        tmap[t[i]]=i+1;
    }
    return true;
}

bool similarWord(string s, string t){
    	if(s.size()!=t.size()){
            return false;
        }
        multiset<int> u;
        for(auto i=0; i<s.size(); i++){
            auto d=s[i]-t[i];
            if(d!=0){
                u.insert(d);
            }
        }
        return (u.size()==1)? true:false;
}


int main() {
    
    string cword;
    vector<string> cwords;
    while (cin >> cword){
        cwords.push_back(cword);
    }

    ifstream infile("dictionary.lst");
    string word;
    set<string> dic;
    while(getline(infile, word)){
        dic.insert(word);
    }

    map<char, char> table;

    vector<vector<string>> matches;
    for(auto e: cwords){
        vector<vector<string>> match;
    for(auto d: dic){
        if(isIsomorphic(e,d)){
            vector<string> v = {e,d};
            match.push_back(v);
        }
    }
    if(match.size()==1){
        matches.push_back(match[0]);
    }
    }
    for(auto e: matches){
        for(int i=0; i<e[0].size(); i++){
            table[e[0][i]]=tolower(e[1][i]);
        }
    }
    matches.clear();

    
    //for(auto e:table){
     //           cout<<e.first<<" "<<e.second<<endl;
      //              }


    for(int i = 0; i<cwords.size(); i++){
        for(int j =0; j<cwords[i].size(); j++){
            if(table.count(cwords[i][j])!=0){
                cwords[i][j]=table[cwords[i][j]];
            }
        }
    }

    for(int i=0; i<cwords.size(); i++){
        if(dic.count(cwords[i])==0){
            for(auto d: dic){
                if(similarWord(cwords[i], d)){
                    cwords[i]=d;
                }
            }
        }
    }


    for(auto e:cwords){
        cout<<e<<" ";
    }
    return 0;
}
