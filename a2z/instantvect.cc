//the program that prints the sentences and it's code in number

#include <iostream>
#include <vector>
#include <string>

class print{
    public:
    print(const std::vector<std::string>& sentence, std::vector<int> time)
    {
        for(const auto& s : sentence)
        {
            std::cout<<"sentence:" <<s<<std::endl;
        }
        for(const auto& t : time)
        {
            std::cout<<"time: "<<t<<std::endl;
        }

    }
};

//driver's code
int main()
{
   std::vector<std::string> sentence = {"a beautiful day", "how you doing", "ahh cant wait", "a beautiful dream haaa haaa"};
   int size = sentence.size();
   std::vector<int> time(size);

    std::cout<<"enter "<<size<<"value for time";

   for(int i=0; i<size; ++i)
   {
    std::cin>>time[i];
   }

   print* obj = new print(sentence, time);

   delete obj;

   return 0;
}
