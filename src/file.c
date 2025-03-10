/**
 * @file file.c
 * @author DavidingPlus (davidingplus@qq.com)
 * @brief file 结构源文件。
 *
 * Copyright (c) 2024 电子科技大学 刘治学
 *
 */

#include "file.h"

#include <linux/fs.h>


struct file_operations nvmixFileOps = {
    .owner = THIS_MODULE,
    .open = generic_file_open,
    // 新内核优先使用 read_iter 和 write_iter 替代 read 和 write，支持异步并且更高效。
    .read_iter = generic_file_read_iter,
    .write_iter = generic_file_write_iter,
    .mmap = generic_file_mmap,
    .llseek = generic_file_llseek,
};
