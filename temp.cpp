#include <iostream>
#include <string.h>
#include <exception>
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

using namespace std;
namespace pt = boost::property_tree;

int main()
{
  
  pt::ptree root;

  pt::read_json("file.json", root);  // Load the json file in this ptree
  int roll = root.get<int>("roll no");  //read and save the roll no in *roll*
  string  name = root.get<string>("name");  //read and save the name in *name*
  string class1 = root.get<string>("class");  //read and save the class in *class1*

  cout << "name : " << name << endl;      //getting the output of all
  cout << "roll no : " << roll << endl;
  cout << "class : " << class1 << endl << "address : " << endl << endl;
  for (pt::ptree::value_type & v : root.get_child("address"))
  {
    cout << v.first << endl;
    cout << "  "<<v.second.data() << endl;
  }

  return 0;
}