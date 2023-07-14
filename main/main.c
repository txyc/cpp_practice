#include <stdio.h>

int file_write_test(void)
{
    printf("该函数用于测试文件写入的方法。\n");
    FILE *fp_write;
    int rs1 = -1;
    int rs2 = -1;
    char *test_file_path = "E:\\codework\\cpp_practice\\test.txt";
    char buff[255];
    fp_write = fopen("E:\\codework\\cpp_practice\\test.txt", "w+");
    printf("使用fputs()函数向指定文件写入部分数据：\n");
    rs1 = fputs("This is testing for fputs!\n", fp_write);
    if(rs1 < 0){
        fclose(fp_write);
        return -1;
    }
    printf("使用fprintf()函数向指定文件写入部分数据：\n");
    rs2 = fprintf(fp_write, "This is testing for fprintf!\n");
    fclose(fp_write);
    if(rs2 < 0){
        return -2;
    }
    return 0;
}

void file_read_test(void)
{
    printf("该函数用于测试文件读取的方法。\n");
    FILE *fp_read;
    int rs1 = -1;
    int rs2 = -1;
    char *test_file_path = "E:\\codework\\cpp_practice\\test.txt";
    char buff[255];
    fp_read = fopen("E:\\codework\\cpp_practice\\test.txt", "r");
    printf("使用fgets()函数从指定文件读取数据：\n");
    fgets(buff, 255, fp_read);
    printf("使用fgets()读取到的数据：\n%s\n", buff);
    printf("使用fscanf()函数从指定文件读取数据：\n");
    fscanf(fp_read, "%s", buff);
    printf("使用fgets()读取到的数据：\n%s\n", buff);
    fclose(fp_read);
}

void operate_left_right_test(){
    printf("该函数用于测试运算符位置的差异");
    int i, j, k, l;
    i = 10;
    j = i++;
    k = ++i;
    l = 10*i++;
    printf("j, k, l: %d, %d, %d",j,k,l);
    printf("\n");
}

int main()
{
    int rs;
    rs = file_write_test();
    if(rs < 0){
        printf("向指定文件写入文件失败，错误码为%d.\n", rs);
    }
    file_read_test();
    operate_left_right_test();
    return 0;
}
