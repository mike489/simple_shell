int built_in(int argc, char *args[])
{
char *builtins[]={"exit", "env"};
int (*builtin) (char **)=(&built_exit)
int built_exit(char **args)
{
    return(0);
}
