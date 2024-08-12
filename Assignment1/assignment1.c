#include <stdio.h>
#include <stdlib.h>

int main()
{

	int choice = 0;
	printf("Do you want to reset all the working subdirectories (CSE,ECE,IT,CSEDS,EE)? \n");
	printf(" 1 - YES\t 0 - NO\n$ ");
	scanf("%d", &choice);

	if (choice == 1)
		system("rm -rf CSE/ ECE/ IT/ CSEDS/ EE/");

	printf("Stating program...\n");

	// task 1
	printf("\nTask 1: create the following sub directories under the current directory\n");
	printf("\t/CSE\n\t/ECE\n\t/IT\n\t/CSEDS\n\t/EE\n");

	printf("> creating the subdirectories ...\n");
	system("mkdir CSE ECE IT CSEDS EE");

	// task 2
	printf("\nTask 2: Create 4 text files using a single command under /CSE subdirectory by sitting under the login directory\n");

	printf("> creating 4 text files ...\n");
	system("touch ./CSE/file1.txt ./CSE/file2.txt ./CSE/file3.txt ./CSE/file4.txt");

	// task 3
	printf("\nTask 3: copy a file named shellprog.c under the subdirectory /CSEDS to subdirectory /ECE by sitting under the /IT subdirectory.\n");

	printf("> creating file shellprog.c in subdir /CSEDS ...\n");
	system("touch ./CSEDS/shellprog.c");

	printf("> changing directory to subdir /IT ...\n");
	system("cd IT/");

	printf("> coping file ...\n");
	system("cp ../CSEDS/shellprog.c ../ECE/shellprog.c");

	// task 4
	printf("\nTask 4: Delete a file named mydoc.txt under subdir /CSEDS by sitting under your login directory.\n");

	system("cd ..");
	system("touch ./CSEDS/mydoc.txt");
	system("rm ./CSEDS/mydoc.txt");

	// task 5
	printf("\nTask 5: Rename a file named helloworld.c to modified_helloworld.c in subdir /ECE\n");
	system("touch ./ECE/helloworld.c");
	system("mv ./ECE/helloworld.c ./ECE/modified_helloworld.c");

	// task 6
	printf("\nTask 6: Display all the files with extension .c under the subdir /CSE by sitting under your login directory.\n");

	system("ls CSE/*.c");

	// task 7
	printf("\nTask 7: Display all files which starts with character 'a' & ends with 'd' (assume filename length of 5 charecters) in subdirectory /EE.\n");

	system("ls ./EE/a???d.*");

	// task 8
	printf("\nTask 8: Change the file acces permission of file modified_helloworld.c from its default FAP to 766 by sitting under /FIEM subdir\n");
	system("chmod 766 ./ECE/modified_helloworld.c");

	// task 9 - DELETE ALL
	printf("\nTask 9: Delete all the directory stucture\n");
	choice = 1;
	printf("Enter 0 to confirm to DELETE all the subdirectories and work : ");
	scanf("%d", &choice);

	if (choice == 0)
		system("rm -rf CSE/ ECE/ IT/ CSEDS/ EE/");

	return 0;
}
