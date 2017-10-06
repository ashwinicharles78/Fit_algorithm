/*#include<bits/stdc++.h>

using namespace std;

main()
{
    std::vector<int> process ;
    std::vector<int> mem_alocs;
    std::vector<int> temp_mem_alocs;
    std::vector<int> alocated_process;
    int internal_fragmentation=0, temp_mem, temp_process, external_fragmentation=0,flag = 0,count=0;
    cout<<"Enter process in order"<<endl<<"Enter a zero at the end to indicate the ending"<<endl;
    while(flag == 0)
    {
        std::cin>>temp_process;
        process.push_back(temp_process);
        if (temp_process == 0)
            flag = 1;
    }
    flag = 0;
    process.pop_back();
    cout<<"Enter memory blocks in order"<<endl<<"Enter a zero at the end to indicate the ending"<<endl;
    while(flag == 0)
    {
        std::cin>>temp_mem;
        mem_alocs.push_back(temp_mem);
        if (temp_mem == 0)
            flag = 1;
    }
    mem_alocs.pop_back();
    for(std::vector<int>::iterator it = mem_alocs.begin(); it != mem_alocs.end() ; ++it)
    {
        temp_mem_alocs.push_back(*it);
    }
    for(std::vector<int>::iterator p = process.begin(); p != process.end() ; ++p)
    {
        auto max = max_element(temp_mem_alocs.begin() , temp_mem_alocs.end());

        for(std::vector<int>::iterator m = temp_mem_alocs.begin(); m != temp_mem_alocs.end() ; ++m)
        {
            if(*p <= *m)
            {
                if(*max > *p)
                {
                    internal_fragmentation += *m - *p;
                    auto pos = std::distance(temp_mem_alocs.begin(), max);
                    alocated_process.push_back(pos);
                    temp_mem_alocs[pos] = 0;
                }
            }
        }
     }

    for(std::vector<int>::iterator it = temp_mem_alocs.begin(); it != temp_mem_alocs.end() ; ++it)
    {
        external_fragmentation += *it;
    }
    for(std::vector<int>::iterator it = alocated_process.begin(); it != alocated_process.end() ; ++it)
    {
        count++;
        cout<<"The process "<<count<<" is alocated to memory block "<<*it<<endl;
    }
    cout<<"External Fragmentation will be -> "<<external_fragmentation<<endl;
    cout<<"Internal Fragmentation will be -> "<<internal_fragmentation<<endl;

   return 0;
}

*/
