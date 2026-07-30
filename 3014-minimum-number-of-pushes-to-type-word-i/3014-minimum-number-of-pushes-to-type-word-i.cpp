class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int group=n/8;
        int rem=n%8;
        return 4*group*(group+1) + rem*(group+1);
    }
};
/*
        8 number in keypads
        g1:0-7 count=1 , g2:8-15 count=2 , so on...
        so if n/8 we will get no of filled groups
        the remaining no will be stored in rem ... this was obviously is filling the next group which is partial 

        so...

        for filled group:
            =8*1+8*2+....+8*group
            =8(1+2+...+group)
            =8(group(group+1)/2)
            =4(group(group+1))

        for partial group:
            =remaining_numbers*(total_no_of_filled_groups+1)
            =rem*(group+1)

        hence final formula:
            = 4(group(group+1)) + rem*(group+1)
        */