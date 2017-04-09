#include <inttypes.h>
#include <stdio.h>


int encode_file(const char *input, const char *output)
{ 
    unsigned int var;
   
	FILE *in, *out;
	if(!(in = fopen("units.txt", "r"))) {
	    return -1;
	}
	if(!(out = fopen("units.bin", "wb"))) {
	    return -1;
	}
	/*in = fopen("units.txt", "r+");
	out = fopen("units.bin", "wb");*/
    if (!(fscanf(in, "%x" SCNx32, &var));
        return -1;
    //printf("%x\n" PRIx32, var);
    
    int  encode_res = encode(var, SCNx32)
    if (encode != -1) {
         fwrite(&var, sizeof(unsigned int), encode_res, out);
         printf("%d", encode_res);
    }   
       
    fclose(in);
    fclose(out);
    return 0;
}   

/*int decode_file(const char *output, const char *input)
{
    unsigned int var;
    FILE *in, *out;
	if((in = fopen("units.bin", "rb")) == NULL) {
	    return -1;
	}
	if((out = fopen("units.txt", "w")) == NULL) {
	    return -1;
	}
	in = fopen("units.bin", "rb");
	out = fopen("units.txt", "w");
    fread(&var, sizeof(unsigned int), 1, in);   
    fprintf(out, "%x", &var);
    printf("%x\n" PRIx32, var);
    
    fclose(in);
    fclose(out);
    return 0; 
}*/
    
    
    
    
	
