class Solution {
public:
    int minimizeXor(int n1, int n2) {
        vector<int>v(40,0),a(40,0);
  int ct=__builtin_popcount(n2);
        /*
  while(n2>0){
    if(n2%2)ct++;
    n2/=2;
  }
  */
  int j=0;
  while(n1>0){
    if(n1%2)v[j]=1;
    j++;
    n1/=2;
  }
  for(int ii=39;ii>=0;ii--){
    if(ct && v[ii]){
      ct--;
      a[ii]=1;
    }
  }
  for(int i=0;i<40;i++){
    if(ct && a[i]==0){
      a[i]=1;
      ct--;
    }
  }
  int an=0;
  for(int i=0;i<40;i++){
    if(a[i])an+=pow(2,i);
  }
  return an;
    }
};
