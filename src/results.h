#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <alloca.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/wait.h>
#include <errno.h>
#include <limits.h>
#include <curl/curl.h>
//#include <curl/types.h>
#include <curl/easy.h>
// #include "mem_ops.h"
#include "html_entities.h" 
#include "string_ops.h"
#include "strsec.h"
#include "file_ops.h"

// colors macro
#define RED "\033[22;31m"
#define YELLOW "\033[01;33m"
#define CYAN "\033[22;36m"
#define GREEN "\033[22;32m"
#define LAST "\033[0m"
 

void write_result(
 void *pack, 
 bool save_response,
 char *chunk_in,
 char *pathtable,
 char *line,
 char * make, 
 char * make_agent, 
 char * make_cookie,
 int counter_cookie,
 int counter_agent,
 long status,
 long length);
