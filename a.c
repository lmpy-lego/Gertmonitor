main()
char ccmd;
{

	printf("GertMonitor>"); 	 /*Prints the prompt*/
	scanf("%s", &ccmd);	 /*reads the prompt*/
	fprintf(debuglog, "Command entered: %s", ccmd); 	/*Prints command to a debug file*/

}
