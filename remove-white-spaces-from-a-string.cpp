//removing blank space
#include <iostream>
using namespace std;
int main()
{
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
	int len=str.length();
	char newstr[len];

	//Removing one or more blank spaces from string
	int i=0,j=0;
	while(str[i]!='\0')
	{
		while(str[i] == ' ')//using loop to remove consecutive blanks
			i++;
		newstr[j]=str[i]; //newstr[j++]=str[i++] we can also use this instead
		i++;
		j++;
	}
	newstr[len-1]='\0';//terminating newstr, we use -1, as j was a post increment.
	cout<<"\n String after removal of blank spaces is:"<<newstr;
	return 0;
}
