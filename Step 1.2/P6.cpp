class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	   for(int i=n;i>=1;i--){
	       for(int j=i;j>=1;j--){
	           cout<<"* ";
	       }
	       cout<<endl;
	   }
	}
};