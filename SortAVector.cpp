#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Website
{
    public:
    int numberOfUrls;
    std::string url;

    Website()
    {
        numberOfUrls = 0;
    }

    Website(int number, string url1)
    {
        numberOfUrls = number;
        url = url1;
    }
};
int main()
{
    std::vector<Website> websites;
    Website w1(1, "www.hackerRank.com");
    Website w2(5, "www.google.com");
    Website w3(2, "www.facebook.com");
    Website w4(3, "www.MyWebsite.com");
    Website w5(10, "www.QQQ (OPC) Pvt Ltd.com");

    websites.push_back(w1);
    websites.push_back(w2);
    websites.push_back(w3);
    websites.push_back(w4);
    websites.push_back(w5);

    cout << "Unordered list :" << endl;
    std::vector<Website>::iterator it = websites.begin();
    for(;it != websites.end(); ++it)
    {
        cout << it->url << endl;
    }
    cout << endl;
    // Use the predicate in form of lambda expression
    // Sort the vector
    std::sort(websites.begin(), websites.end(), [](const Website &lhs, const Website &rhs)
    {
        return lhs.numberOfUrls < rhs.numberOfUrls;
    });

    std::vector<Website>::iterator it1 = websites.begin();
    for(; it1 != websites.end(); ++it1)
    {
        cout << it1->url << endl;
    }
}