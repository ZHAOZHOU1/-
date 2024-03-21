#include<stdio.h>
int main()
{
	int syringe[]={1,3,5};
	int syr_len =sizeof(syringe)/sizeof(int);
	float dosage[]={0.8,2.0,3.0,4.0,5.0};
	int dos_len =sizeof(dosage)/sizeof(float);
	for(int i=0;i<dos_len;i++)
	{
		for(int j=0;j<syr_len;j++)
		{
			for(int k=10;k<=180;k+=10)
			{
				if(dosage[i]>syringe[j])
				{
					continue;
				}
				float single_dose =dosage[i]/k;
				printf("注射剂量%.1fml 注射器容量%dml 注射次数%d次 单次注射剂量%.3fml\n", dosage[i], syringe[j], k, single_dose);
			}
		}
	}
	return 0;
	
 } 
