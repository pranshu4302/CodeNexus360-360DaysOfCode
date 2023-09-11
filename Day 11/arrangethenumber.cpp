//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    // code here
	     string res="";

  sort(arr.begin(),arr.end(),[](string a,string b){

      return a+b>(b+a);

  });

  

  for(auto it:arr) res+=it; 

  return res;
    
	}
};
