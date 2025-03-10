/**
 * @file defs.h
 * @author DavidingPlus (davidingplus@qq.com)
 * @brief 定义全局宏和结构体的头文件。
 *
 * Copyright (c) 2024 电子科技大学 刘治学
 *
 */


#ifndef _NVMIX_DEFS_H_
#define _NVMIX_DEFS_H_

#include <linux/fs.h>


#define NVMIX_BLOCK_SIZE 4096 // 4 KIB


struct NvmixInodeInfo
{
    struct inode m_vfsInode;

    __u16 m_dataBlock;
};


#endif
