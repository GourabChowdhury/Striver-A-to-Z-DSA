class Solution {
  public:
    void printTriangle(int n) {
        int p=1;
         for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<p<<" ";
                p++;
            }
         cout<<endl;
         }
    }
};