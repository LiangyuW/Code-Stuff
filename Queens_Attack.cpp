


bool isObstacle(int x, int y, unordered_set<string> &obstacles){

    string s = to_string(x)+" "+to_string(y);
    if(obstacles.count(s) != 0){
        return true;
    } else {
        return false;
    }
}

int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {

unordered_set<string> obstacleSet ; 

for(int i = 0; i<obstacles.size(); i++){
    obstacleSet.insert(to_string(obstacles[i][0])+" "+to_string(obstacles[i][1]));
}

int count = 0;
int x= r_q; int y= c_q;
while(y!=1 && !isObstacle(x, y-1, obstacleSet)){
y--,  count++;
}

x= r_q; y= c_q;
while(x!=n && !isObstacle(x+1, y, obstacleSet)){
x++,  count++;
}

x= r_q; y= c_q;
while(y!=n && !isObstacle(x, y+1, obstacleSet)){
y++,  count++;
}

x= r_q; y= c_q;
while(x!=1 && !isObstacle(x-1, y, obstacleSet)){
x--,  count++;
}

x= r_q; y= c_q;
while(y!=1 && x!=n && !isObstacle(x+1, y-1, obstacleSet)){
x++, y--, count++;
}

x= r_q; y= c_q;
while(y!=n && x!=n && !isObstacle(x+1, y+1, obstacleSet)){
x++, y++, count++;
}

x= r_q; y= c_q;
while(x!=1 && y!=1 && !isObstacle(x-1, y-1, obstacleSet)){
x--, y--, count++;
}

x= r_q; y= c_q;
while(x!=1 && y!=n && !isObstacle(x-1, y+1, obstacleSet)){
x--, y++, count++;
}

cout << count;
return count;
}
