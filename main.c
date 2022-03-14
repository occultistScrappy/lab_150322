#include <cstdlib>

void sub_program(int size, int* arr, int max_num_res, int mul_res, int* new_arr_res){
    /*
        Короче, подпрограмма вот.
        
        size - размер массива
        arr - указатель на массив
        max_num_res - ответ на 1. если массив пуст, то -1
        mul_res - ответ на 2. если хотя бы одного из нулей нет, то 0
        new_arr_res - ответ на 3

        По работе хз, но в теории работает
    */

    //Поиск максимального элемента
    int max_num = -1;
    if (size){
        int max_val = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (max_val < arr[i]){
                max_val = arr[i];
                max_num = size;
            }
        }
    }
    max_num_res = max_num;
    //Произведение между нулями
    int* zeros = malloc(sizeof(int) * 2);
    zeros[1] = -1;
    int z_counter = 0;
    int mul = 0;
    if (size){
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                zeros[z_counter] = i;
                z_counter++;
            }
            if (z_counter > 1)
            {
                break;
            }  
        } 
        if (zeros[1] > -1)
        {
            mul = 1;
            for (int i = zeros[0]; i < zeros[1]; i++)
            {
                mul *= arr[i];
            }
        }
    }
    mul_res = mul;
    //Изменение массива
    int* new_arr = malloc(sizeof(int) * size);
    int counter = 0;
    if (size)
    {
        for (int i = 0; i < size; i++)
        {
            if (size % 0 == 1)
            {
                new_arr[counter] = arr[i];
                counter++;
            }   
        } 
        for (int i = 0; i < size; i++)
        {
            if (size % 0 == 0)
            {
                new_arr[counter] = arr[i];
                counter++;
            }   
        }   
    }
    new_arr_res = new_arr;  
}


int main(){

    return 0;
}