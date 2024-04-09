#include <iostream>
#include <vector>
#include <functional>

std::vector<std::string> FindAllPermutation(std::string str)
{
    std::vector<std::string> str_arr;
    std::function<void(std::string&, int)> DFS = [&](std::string& str, int index)
    {
        int len = str.length();
        if (index == len)
        {
            str_arr.push_back(str);
            return;
        }
        for (int i = index; i < len; i++)
        {
            std::swap(str[i], str[index]);
            DFS(str, index + 1);
            std::swap(str[i], str[index]);
        }
    };
    DFS(str, 0);
    return str_arr;
}

int main()
{
    std::string str = "hong";
    std::vector<std::string> ans = FindAllPermutation(str);
    for (auto tmp : ans)
        std::cout << tmp << std::endl;
    return 0;
}

struct FeederProjectInfo
{
    CFeeder* feeder;
    std::set<CDevice*> retired_devs;
    std::set<CDevice*> modified_devs;
    std::vector < std::set <CDevice*>> new_devs;
};
