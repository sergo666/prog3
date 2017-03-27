int encode_file(const char *input, const char *output)
{ 
    int input;
	FILE *in, ou = NULL;
	in = fopen("units.txt", "w");
	ou = fopen("units.bin", "wb");
    if (input = NULL && output = NULL) 
        return -1;
    fscanf(in, "%" SCNx32, &input);
    printf("%" PRIx32, input);
    
    fclose(in);
    fclose(ou);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	
