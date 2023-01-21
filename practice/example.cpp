bool cmp(pair<string, int> p1, pair<string, int> p2){
    if(p1.first < p2.first){
        return true;
    }
    if(p1.first > p2.first){
        return false;
    }
    if(p1.first == p2.first){
        if(p1.second < p2.second){
            return true;
        }
        if(p1.second > p2.second){
            return false;
        }
    }
    return false;
}
