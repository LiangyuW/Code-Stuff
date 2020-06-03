
string gridSearch(vector<string> G, vector<string> P) {

int match;
int prow = P.size();
bool value = false;
int columns = P[0].length();
for(int i = 0; i< G.size(); i++){
    size_t pos = G[i].find(P[0]);
    int s = G.size()-i-prow;
    while(pos!=string::npos && s >=0){
        match =1;  
    for(int j = 1; j<prow; j++){
        if(G[i+j].substr(pos, columns)==P[j]){
            match++;
        }
    } 
    if (match==P.size()){
        return "YES";
    }
    pos = G[i].find(P[0], pos+1);
    }
}
return "NO";
}
