#include <bits/stdc++.h>

int main(){
	
	char question[100];
	char input[10];
	char consul[10];
	
	do{
		printf("\n======================\n");
		printf("Welcome Back to Verteb\n");
		printf("======================\n");
	
		printf("\n	CONSULTATION SEGMENT\n");
		printf("	====================\n");
		printf("\nDo you experience pain in the hip area?\n");
		printf("|Yes|	|No|\n");
		printf("Input: ");
		scanf("%s", input);
	
		if(strcmp(input, "No") == 0){
			printf("\n");
			printf("THE DIAGNOSIS SAID:");
			printf("The Expert System Diagnosis Results Indicate that You have Been Diagnosed as Healthy\n");
			printf("\nKeep Exercising And Eating a Healthy Diet to Keep Your Body Healthy, Fit, and Physically Active.\n");
			
			printf("\nConsutation Again:\n");
			printf("|Yes|	|No|\n");
			printf("Input: ");
			scanf("%s", consul);
			system("cls");
		}
		else if(strcmp(input, "Yes") == 0){
			system("cls");
			printf("Do you experience respiratory problems or balance issues?\n");
			printf("|Yes|	|No|\n");
			printf("Input: ");
			scanf("%s", input);
			system("cls");
		
			if(strcmp(input, "Yes") == 0){
				printf("Do you feel that one shoulder is higher than the other?\n");
				printf("|Yes|	|No|\n");
				printf("Input: ");
				scanf("%s", input);
				system("cls");
				
				if(strcmp(input, "Yes") == 0){
					printf("Do you feel that one of your collarbones protrudes more than the other?\n");
					printf("|Yes|	|No|\n");
					printf("Input: ");
					scanf("%s", input);
					system("cls");
				
					if(strcmp(input, "Yes") == 0){
						printf("Do you also experience in the back area?\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", input);
						system("cls");
					
						if(strcmp(input, "Yes") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Scoliosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
						else if(strcmp(input, "No") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
					}
					else if(strcmp(input, "No") == 0){
						printf("Do your buttocks and abdomen appear prominent?\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", input);
						system("cls");
						
						if(strcmp(input, "Yes") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
						else if(strcmp(input, "No") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
					}
				}
				else if(strcmp(input, "No") == 0){
					printf("Do you feel that your body posture is hunched?\n");
					printf("|Yes|	|No|\n");
					printf("Input: ");
					scanf("%s", input);
					system("cls");
					
					if(strcmp(input, "Yes") == 0){
						printf("Do your buttocks and abdomen appear prominent?\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", input);
						system("cls");
						
						if(strcmp(input, "Yes") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
						else if(strcmp(input, "No") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
					}
				}
			}
			else if(strcmp(input, "No") == 0){
				printf("Do you experience pain in the knee or leg area, or in the neck?\n");
				printf("|Yes|	|No|\n");
				printf("Input: ");
				scanf("%s", input);
				system("cls");
				
				if(strcmp(input, "Yes") == 0){
					printf("Do you feel that your body posture is hunched?\n");
					printf("|Yes|	|No|\n");
					printf("Input: ");
					scanf("%s", input);
					system("cls");
					
					if(strcmp(input, "Yes") == 0){
						printf("Do your buttocks and abdomen appear prominent?\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", input);
						system("cls");
						
						if(strcmp(input, "Yes") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
						else if(strcmp(input, "No") == 0){
							printf("\n");
							printf("THE DIAGNOSIS SAID:\n");
							printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
							printf("\nTREATMENT:\n");
							printf("Immediately undergo regular treatment with a doctor.\n");
							
							printf("\nConsultation Again:\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", consul);
							system("cls");
						}
					}
					else if(strcmp(input, "No") == 0){
						printf("Do you feel that your back feels stiff?\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", input);
						system("cls");
						
						if(strcmp(input, "Yes") == 0){
							printf("Do you experience pain when bending and difficulty walking?\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", input);
							system("cls");
							
							if(strcmp(input, "Yes") == 0){
								printf("\n");
								printf("THE DIAGNOSIS SAID:\n");
								printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Kyphosis\n");
								printf("\nTREATMENT\n");
								printf("Immediately undergo regular treatment with a doctor.\n");
							
								printf("\nConsultation Again:\n");
								printf("|Yes|	|No|\n");
								printf("Input: ");
								scanf("%s", consul);
								system("cls");
							}
							else if(strcmp(input, "No") == 0){
								printf("\n");
								printf("THE DIAGNOSIS SAID:\n");
								printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Kyphosis\n");
								printf("\nTREATMENT\n");
								printf("Immediately undergo regular treatment with a doctor.\n");
							
								printf("\nConsultation Again:\n");
								printf("|Yes|	|No|\n");
								printf("Input: ");
								scanf("%s", consul);
								system("cls");
							}
						}
						else if(strcmp(input, "No") == 0){
							printf("Do you feel that you have lost height and have lost bone shape?\n");
							printf("|Yes|	|No|\n");
							printf("Input: ");
							scanf("%s", input);
							system("cls");
							
							if(strcmp(input, "Yes") == 0){
								printf("\n");
								printf("THE DIAGNOSIS SAID:\n");
								printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Osteophorosis\n");
								printf("\nTREATMENT\n");
								printf("Immediately undergo regular treatment with a doctor.\n");
							
								printf("\nConsultation Again:\n");
								printf("|Yes|	|No|\n");
								printf("Input: ");
								scanf("%s", consul);
								system("cls");
							}
							else if(strcmp(input, "No") == 0){
								printf("\n");
								printf("THE DIAGNOSIS SAID:\n");
								printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Osteophorosis\n");
								printf("\nTREATMENT\n");
								printf("Immediately undergo regular treatment with a doctor.\n");
							
								printf("\nConsultation Again:\n");
								printf("|Yes|	|No|\n");
								printf("Input: ");
								scanf("%s", consul);
								system("cls");
							}
						}
					}
				}
				else if(strcmp(input, "No") == 0){
					printf("Do your buttocks and abdomen appear prominent?\n");
					printf("|Yes|	|No|\n");
					printf("Input: ");
					scanf("%s", input);
					system("cls");
					
					if(strcmp(input, "Yes") == 0){
						printf("\n");
						printf("THE DIAGNOSIS SAID:\n");
						printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
						printf("\nTREATMENT:\n");
						printf("Immediately undergo regular treatment with a doctor.\n");
							
						printf("\nConsultation Again:\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", consul);
						system("cls");
					}
					else if(strcmp(input, "No") == 0){
						printf("\n");
						printf("THE DIAGNOSIS SAID:\n");
						printf("The Expert System Diagnosis Results Indicate that You Have Been Diagnosed with Lordosis\n");
						printf("\nTREATMENT:\n");
						printf("Immediately undergo regular treatment with a doctor.\n");
							
						printf("\nConsultation Again:\n");
						printf("|Yes|	|No|\n");
						printf("Input: ");
						scanf("%s", consul);
						system("cls");
					}
				}
			}
		}
	}while(strcmp(consul, "Yes") == 0);
	
	printf("\nThanks for using Verteb :)");
	
	return 0;
}
