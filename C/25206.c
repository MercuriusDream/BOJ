#include <stdio.h>
#include <string.h>

char name[51];

int main(){
    double curr_pt, pt_sum = 0, listen_pt = 0;

    int pass_amt = 0;
    char rate[3];
    for(int i=0;i<20;i++){
        scanf("%s", name);
        scanf("%lf", &curr_pt);
        scanf("%s", rate);
        

        if (rate[0] == 'P')pass_amt++;
        else{
            listen_pt += curr_pt;
            if (strlen(rate) == 1) continue;
            else{
                if (rate[0] == 'A' && rate[1] == '+') pt_sum += curr_pt * 4.5;
                else if (rate[0] == 'A' && rate[1] == '0') pt_sum += curr_pt * 4.0;
                else if (rate[0] == 'B' && rate[1] == '+') pt_sum += curr_pt * 3.5;
                else if (rate[0] == 'B' && rate[1] == '0') pt_sum += curr_pt * 3.0;
                else if (rate[0] == 'C' && rate[1] == '+') pt_sum += curr_pt * 2.5;
                else if (rate[0] == 'C' && rate[1] == '0') pt_sum += curr_pt * 2.0;
                else if (rate[0] == 'D' && rate[1] == '+') pt_sum += curr_pt * 1.5;
                else if (rate[0] == 'D' && rate[1] == '0') pt_sum += curr_pt * 1.0;
            }
        }
        
    }

    printf("%lf", pt_sum / (double)(listen_pt));
    return 0;
}