
// automatically generated by m4 from headers in proto subdir


#ifndef _STDIO_H
#define _STDIO_H

#include <stdint.h>

// DATA STRUCTURES

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int    size_t;
#endif

typedef unsigned long   fpos_t;
typedef struct { unsigned char file[13];} FILE;

#ifndef NULL
#define NULL            ((void*)(0))
#endif

#define _IOFBF          0
#define _IOLBF          1
#define _IONBF          2

#define BUFSIZ          1      // clib does not do high level buffering

#define EOF             (-1)

#define FOPEN_MAX       8      // probably changed by target

#define FILENAME_MAX    128

#define L_tmpnam        8
#define TMP_MAX         16

#ifndef SEEK_SET
#define SEEK_SET        0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR        1
#endif

#ifndef SEEK_END
#define SEEK_END        2
#endif

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

IFDEF __CPM

   extern FILE *stdrdr;
   extern FILE *stdpun;
   extern FILE *stdlst;

ENDIF

// FUNCTIONS

extern FILE *_fmemopen_(void **bufp,size_t *sizep,char *mode);
extern FILE *_fmemopen__callee(void **bufp,size_t *sizep,char *mode) __z88dk_callee;
#define _fmemopen_(a,b,c) _fmemopen__callee(a,b,c)


extern int asprintf(char **ptr,char *format,...);


extern void clearerr(FILE *stream);
extern void clearerr_fastcall(FILE *stream) __z88dk_fastcall;
#define clearerr(a) clearerr_fastcall(a)


extern int fclose(FILE *stream);
extern int fclose_fastcall(FILE *stream) __z88dk_fastcall;
#define fclose(a) fclose_fastcall(a)


extern FILE *fdopen(int fd,const char *mode);
extern FILE *fdopen_callee(int fd,const char *mode) __z88dk_callee;
#define fdopen(a,b) fdopen_callee(a,b)


extern int feof(FILE *stream);
extern int feof_fastcall(FILE *stream) __z88dk_fastcall;
#define feof(a) feof_fastcall(a)


extern int ferror(FILE *stream);
extern int ferror_fastcall(FILE *stream) __z88dk_fastcall;
#define ferror(a) ferror_fastcall(a)


extern int fflush(FILE *stream);
extern int fflush_fastcall(FILE *stream) __z88dk_fastcall;
#define fflush(a) fflush_fastcall(a)


extern int fgetc(FILE *stream);
extern int fgetc_fastcall(FILE *stream) __z88dk_fastcall;
#define fgetc(a) fgetc_fastcall(a)


extern int fgetpos(FILE *stream,fpos_t *pos);
extern int fgetpos_callee(FILE *stream,fpos_t *pos) __z88dk_callee;
#define fgetpos(a,b) fgetpos_callee(a,b)


extern char *fgets(char *s,int n,FILE *stream);
extern char *fgets_callee(char *s,int n,FILE *stream) __z88dk_callee;
#define fgets(a,b,c) fgets_callee(a,b,c)


extern int fileno(FILE *stream);
extern int fileno_fastcall(FILE *stream) __z88dk_fastcall;
#define fileno(a) fileno_fastcall(a)


extern void flockfile(FILE *stream);
extern void flockfile_fastcall(FILE *stream) __z88dk_fastcall;
#define flockfile(a) flockfile_fastcall(a)


extern FILE *fmemopen(void *buf,size_t size,char *mode);
extern FILE *fmemopen_callee(void *buf,size_t size,char *mode) __z88dk_callee;
#define fmemopen(a,b,c) fmemopen_callee(a,b,c)


extern FILE *fopen(const char *filename,const char *mode);
extern FILE *fopen_callee(const char *filename,const char *mode) __z88dk_callee;
#define fopen(a,b) fopen_callee(a,b)


extern int fprintf(FILE *stream,char *format,...);


extern int fputc(int c,FILE *stream);
extern int fputc_callee(int c,FILE *stream) __z88dk_callee;
#define fputc(a,b) fputc_callee(a,b)


extern int fputs(char *s,FILE *stream);
extern int fputs_callee(char *s,FILE *stream) __z88dk_callee;
#define fputs(a,b) fputs_callee(a,b)


extern size_t fread(void *ptr,size_t size,size_t nmemb,FILE *stream);
extern size_t fread_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __z88dk_callee;
#define fread(a,b,c,d) fread_callee(a,b,c,d)


extern FILE *freopen(char *filename,char *mode,FILE *stream);
extern FILE *freopen_callee(char *filename,char *mode,FILE *stream) __z88dk_callee;
#define freopen(a,b,c) freopen_callee(a,b,c)


extern int fscanf(FILE *stream,char *format,...);


extern int fseek(FILE *stream,long offset,int whence);
extern int fseek_callee(FILE *stream,long offset,int whence) __z88dk_callee;
#define fseek(a,b,c) fseek_callee(a,b,c)


extern int fsetpos(FILE *stream,fpos_t *pos);
extern int fsetpos_callee(FILE *stream,fpos_t *pos) __z88dk_callee;
#define fsetpos(a,b) fsetpos_callee(a,b)


extern uint32_t ftell(FILE *stream);
extern uint32_t ftell_fastcall(FILE *stream) __z88dk_fastcall;
#define ftell(a) ftell_fastcall(a)


extern int ftrylockfile(FILE *stream);
extern int ftrylockfile_fastcall(FILE *stream) __z88dk_fastcall;
#define ftrylockfile(a) ftrylockfile_fastcall(a)


extern void funlockfile(FILE *stream);
extern void funlockfile_fastcall(FILE *stream) __z88dk_fastcall;
#define funlockfile(a) funlockfile_fastcall(a)


extern size_t fwrite(void *ptr,size_t size,size_t nmemb,FILE *stream);
extern size_t fwrite_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __z88dk_callee;
#define fwrite(a,b,c,d) fwrite_callee(a,b,c,d)


extern int getc(FILE *stream);
extern int getc_fastcall(FILE *stream) __z88dk_fastcall;
#define getc(a) getc_fastcall(a)


extern int getchar(void);


extern int getdelim(char **lineptr,size_t *n,int delim,FILE *stream);
extern int getdelim_callee(char **lineptr,size_t *n,int delim,FILE *stream) __z88dk_callee;
#define getdelim(a,b,c,d) getdelim_callee(a,b,c,d)


extern int getline(char **lineptr,size_t *n,FILE *stream);
extern int getline_callee(char **lineptr,size_t *n,FILE *stream) __z88dk_callee;
#define getline(a,b,c) getline_callee(a,b,c)


extern char gets(char *s);
extern char gets_fastcall(char *s) __z88dk_fastcall;
#define gets(a) gets_fastcall(a)


extern int obstack_printf(struct obstack *ob,char *format,...);


extern int obstack_vprintf(struct obstack *ob,char *format,void *arg);
extern int obstack_vprintf_callee(struct obstack *ob,char *format,void *arg) __z88dk_callee;
#define obstack_vprintf(a,b,c) obstack_vprintf_callee(a,b,c)


extern FILE *open_memstream(char **bufp,size_t *sizep);
extern FILE *open_memstream_callee(char **bufp,size_t *sizep) __z88dk_callee;
#define open_memstream(a,b) open_memstream_callee(a,b)


extern void perror(char *s);
extern void perror_fastcall(char *s) __z88dk_fastcall;
#define perror(a) perror_fastcall(a)


extern int printf(char *format,...);


extern int putc(int c,FILE *stream);
extern int putc_callee(int c,FILE *stream) __z88dk_callee;
#define putc(a,b) putc_callee(a,b)


extern int putchar(int c);
extern int putchar_fastcall(int c) __z88dk_fastcall;
#define putchar(a) putchar_fastcall(a)


extern int puts(char *s);
extern int puts_fastcall(char *s) __z88dk_fastcall;
#define puts(a) puts_fastcall(a)


extern void rewind(FILE *stream);
extern void rewind_fastcall(FILE *stream) __z88dk_fastcall;
#define rewind(a) rewind_fastcall(a)


extern int scanf(char *format,...);


extern int snprintf(char *s,size_t n,char *format,...);


extern int sprintf(char *s,char *format,...);


extern int sscanf(char *s,char *format,...);


extern int ungetc(int c,FILE *stream);
extern int ungetc_callee(int c,FILE *stream) __z88dk_callee;
#define ungetc(a,b) ungetc_callee(a,b)


extern int vasprintf(char **ptr,char *format,void *arg);
extern int vasprintf_callee(char **ptr,char *format,void *arg) __z88dk_callee;
#define vasprintf(a,b,c) vasprintf_callee(a,b,c)


extern int vfprintf(FILE *stream,char *format,void *arg);
extern int vfprintf_callee(FILE *stream,char *format,void *arg) __z88dk_callee;
#define vfprintf(a,b,c) vfprintf_callee(a,b,c)


extern int vfscanf(FILE *stream,char *format,void *arg);
extern int vfscanf_callee(FILE *stream,char *format,void *arg) __z88dk_callee;
#define vfscanf(a,b,c) vfscanf_callee(a,b,c)


extern int vprintf(char *format,void *arg);
extern int vprintf_callee(char *format,void *arg) __z88dk_callee;
#define vprintf(a,b) vprintf_callee(a,b)


extern int vscanf(char *format,void *arg);
extern int vscanf_callee(char *format,void *arg) __z88dk_callee;
#define vscanf(a,b) vscanf_callee(a,b)


extern int vsnprintf(char *s,size_t n,char *format,void *arg);
extern int vsnprintf_callee(char *s,size_t n,char *format,void *arg) __z88dk_callee;
#define vsnprintf(a,b,c,d) vsnprintf_callee(a,b,c,d)


extern int vsprintf(char *s,char *format,void *arg);
extern int vsprintf_callee(char *s,char *format,void *arg) __z88dk_callee;
#define vsprintf(a,b,c) vsprintf_callee(a,b,c)


extern int vsscanf(char *s,char *format,void *arg);
extern int vsscanf_callee(char *s,char *format,void *arg) __z88dk_callee;
#define vsscanf(a,b,c) vsscanf_callee(a,b,c)



extern void clearerr_unlocked(FILE *stream);
extern void clearerr_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define clearerr_unlocked(a) clearerr_unlocked_fastcall(a)


extern int fclose_unlocked(FILE *stream);
extern int fclose_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define fclose_unlocked(a) fclose_unlocked_fastcall(a)


extern int feof_unlocked(FILE *stream);
extern int feof_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define feof_unlocked(a) feof_unlocked_fastcall(a)


extern int ferror_unlocked(FILE *stream);
extern int ferror_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define ferror_unlocked(a) ferror_unlocked_fastcall(a)


extern int fflush_unlocked(FILE *stream);
extern int fflush_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define fflush_unlocked(a) fflush_unlocked_fastcall(a)


extern int fgetc_unlocked(FILE *stream);
extern int fgetc_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define fgetc_unlocked(a) fgetc_unlocked_fastcall(a)


extern int fgetpos_unlocked(FILE *stream,fpos_t *pos);
extern int fgetpos_unlocked_callee(FILE *stream,fpos_t *pos) __z88dk_callee;
#define fgetpos_unlocked(a,b) fgetpos_unlocked_callee(a,b)


extern char *fgets_unlocked(char *s,int n,FILE *stream);
extern char *fgets_unlocked_callee(char *s,int n,FILE *stream) __z88dk_callee;
#define fgets_unlocked(a,b,c) fgets_unlocked_callee(a,b,c)


extern int fileno_unlocked(FILE *stream);
extern int fileno_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define fileno_unlocked(a) fileno_unlocked_fastcall(a)


extern int fprintf_unlocked(FILE *stream,char *format,...);


extern int fputc_unlocked(int c,FILE *stream);
extern int fputc_unlocked_callee(int c,FILE *stream) __z88dk_callee;
#define fputc_unlocked(a,b) fputc_unlocked_callee(a,b)


extern int fputs_unlocked(char *s,FILE *stream);
extern int fputs_unlocked_callee(char *s,FILE *stream) __z88dk_callee;
#define fputs_unlocked(a,b) fputs_unlocked_callee(a,b)


extern size_t fread_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream);
extern size_t fread_unlocked_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __z88dk_callee;
#define fread_unlocked(a,b,c,d) fread_unlocked_callee(a,b,c,d)


extern FILE *freopen_unlocked(char *filename,char *mode,FILE *stream);
extern FILE *freopen_unlocked_callee(char *filename,char *mode,FILE *stream) __z88dk_callee;
#define freopen_unlocked(a,b,c) freopen_unlocked_callee(a,b,c)


extern int fscanf_unlocked(FILE *stream,char *format,...);


extern int fseek_unlocked(FILE *stream,long offset,int whence);
extern int fseek_unlocked_callee(FILE *stream,long offset,int whence) __z88dk_callee;
#define fseek_unlocked(a,b,c) fseek_unlocked_callee(a,b,c)


extern int fsetpos_unlocked(FILE *stream,fpos_t *pos);
extern int fsetpos_unlocked_callee(FILE *stream,fpos_t *pos) __z88dk_callee;
#define fsetpos_unlocked(a,b) fsetpos_unlocked_callee(a,b)


extern uint32_t ftell_unlocked(FILE *stream);
extern uint32_t ftell_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define ftell_unlocked(a) ftell_unlocked_fastcall(a)


extern size_t fwrite_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream);
extern size_t fwrite_unlocked_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __z88dk_callee;
#define fwrite_unlocked(a,b,c,d) fwrite_unlocked_callee(a,b,c,d)


extern int getc_unlocked(FILE *stream);
extern int getc_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define getc_unlocked(a) getc_unlocked_fastcall(a)


extern int getchar_unlocked(void);


extern int getdelim_unlocked(char **lineptr,size_t *n,int delim,FILE *stream);
extern int getdelim_unlocked_callee(char **lineptr,size_t *n,int delim,FILE *stream) __z88dk_callee;
#define getdelim_unlocked(a,b,c,d) getdelim_unlocked_callee(a,b,c,d)


extern int getline_unlocked(char **lineptr,size_t *n,FILE *stream);
extern int getline_unlocked_callee(char **lineptr,size_t *n,FILE *stream) __z88dk_callee;
#define getline_unlocked(a,b,c) getline_unlocked_callee(a,b,c)


extern char gets_unlocked(char *s);
extern char gets_unlocked_fastcall(char *s) __z88dk_fastcall;
#define gets_unlocked(a) gets_unlocked_fastcall(a)


extern int printf_unlocked(char *format,...);


extern int putc_unlocked(int c,FILE *stream);
extern int putc_unlocked_callee(int c,FILE *stream) __z88dk_callee;
#define putc_unlocked(a,b) putc_unlocked_callee(a,b)


extern int putchar_unlocked(int c);
extern int putchar_unlocked_fastcall(int c) __z88dk_fastcall;
#define putchar_unlocked(a) putchar_unlocked_fastcall(a)


extern int puts_unlocked(char *s);
extern int puts_unlocked_fastcall(char *s) __z88dk_fastcall;
#define puts_unlocked(a) puts_unlocked_fastcall(a)


extern void rewind_unlocked(FILE *stream);
extern void rewind_unlocked_fastcall(FILE *stream) __z88dk_fastcall;
#define rewind_unlocked(a) rewind_unlocked_fastcall(a)


extern int scanf_unlocked(char *format,...);


extern int ungetc_unlocked(int c,FILE *stream);
extern int ungetc_unlocked_callee(int c,FILE *stream) __z88dk_callee;
#define ungetc_unlocked(a,b) ungetc_unlocked_callee(a,b)


extern int vfprintf_unlocked(FILE *stream,char *format,void *arg);
extern int vfprintf_unlocked_callee(FILE *stream,char *format,void *arg) __z88dk_callee;
#define vfprintf_unlocked(a,b,c) vfprintf_unlocked_callee(a,b,c)


extern int vfscanf_unlocked(FILE *stream,char *format,void *arg);
extern int vfscanf_unlocked_callee(FILE *stream,char *format,void *arg) __z88dk_callee;
#define vfscanf_unlocked(a,b,c) vfscanf_unlocked_callee(a,b,c)


extern int vprintf_unlocked(char *format,void *arg);
extern int vprintf_unlocked_callee(char *format,void *arg) __z88dk_callee;
#define vprintf_unlocked(a,b) vprintf_unlocked_callee(a,b)


extern int vscanf_unlocked(char *format,void *arg);
extern int vscanf_unlocked_callee(char *format,void *arg) __z88dk_callee;
#define vscanf_unlocked(a,b) vscanf_unlocked_callee(a,b)



#endif
