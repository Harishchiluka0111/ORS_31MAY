#include"registration.h"

//****************************Delete training registration form********************************

void delete_training_registration_form()
{
	int form_option; //Integer variable to select one training from available trainings

	//To display trainings available
	if(Forms_count > 0)
	{
		printf("\nAvailable trainings are: \n");
		for(int i = 0;i < Forms_count;i++)
		{
			printf("%d. %s\n", i+1, Forms[i]);
		}
		printf("Enter the option to delete training registration form: ");
		scanf("%d", &form_option);
		strcat(Forms[form_option - 1],"_training.xlsx"); //concatenate two strings

		//To delete the file selected from the user
		if(remove(Forms[form_option - 1])==0)
		{
			printf("File deleted successfully\n");
			for(int i = form_option;i < Forms_count;i++)
			{
				strcpy(Forms[i-1], Forms[i]);
				First_field[i-1] = First_field[i];

			}
			Forms_count--; //To decrement forms count
			main();
		}
		else
		{
			printf("File is not deleted\n");
			main();
		}
	}
	else
	{
		printf("No training registration forms available \n");
		main();
	}
}
