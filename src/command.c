#include "coder.h"
#include "command.h"
#include <inttypes.h>

int encode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in, *out; fopen(in_file_name, "r");
	if (!(in = fopen(in_file_name, "r"))) {
		return -1;
	}
	uint32_t code_point;
	CodeUnits code_units;

	fscanf(in, "%" SCNx32, &code_point);
	fclose(in);

	//printf("%" "x\n", code_point);

	if (encode(code_point, &code_units) == -1) {
		return -1;
	}

	if (!(out = fopen(out_file_name, "w"))) {
	    return -1;
	}
	write_code_unit(out, &code_units);
	fclose(out);

	return 0;
}

int decode_file(const char *in_file_name, const char *out_file_name)
{
	FILE *in, *out; 
	if (!(in = fopen(in_file_name, "r"))) {
		return -1;
	}
	CodeUnits code_units;
	uint32_t code_point;

	if (read_next_code_unit(in, &code_units) == -1) {
		return -1;
	}

	code_point = decode(&code_units);
	if (code_point == -1) {
		return -1;
	}

	if (!(out = fopen(out_file_name, "w"))) {
	    return -1;
	}
	fprintf(out, "%" "x", code_point);
	fclose(out);
	fclose(in);

	return 0;
}
    
    
    
	
