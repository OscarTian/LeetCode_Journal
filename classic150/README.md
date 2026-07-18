# LeetCode_Journal Classic150
*As the title says.*  
*This project is written entirely in C++.*

## 2026.02.01

### [88. 合并两个有序数组](solutions/array&string/088.cpp)
- 逆向操作避免数据覆盖
- 只需处理完`nums2`即可结束

### [27. 移除元素](solutions/array&string/027.cpp)
- 快慢指针实现原地修改
- 注意边界条件

### [26. 删除有序数组中的重复项](solutions/array&string/026.cpp)
- 比较`nums[k]`与`nums[p]`
- 发现新元素时先移动`k`再赋值

## 2026.07.14

### [80. 删除有序数组中的重复项 II](solutions/array&string/080.cpp)
- 采用快慢指针
- 考虑边界情况
- 只需考虑相隔一位重复情况

### [169. 多数元素](solutions/array&string/169.cpp)
- 摩尔投票法
- 不同元素间“两两抵消”，到最后剩下的必然是多数元素

### [189. 轮转数组](solutions/array&string/189.cpp)
- 考虑边界情况

### [121. 买卖股票的最佳时机](solutions/array&string/121.cpp)
- 一次遍历，更新目前最低买入价和历史最高利润

### [122. 买卖股票的最佳时机 II](solutions/array&string/122.cpp)
- 注意`for`循环的现代写法`auto x`

### [55. 跳跃游戏](solutions/array&string/055.cpp)

## 2026.07.15

### [45. 跳跃游戏 II](solutions/array&string/045.cpp)
- 贪心算法捕捉最远边界，到达边界时更新`step`

### [274. H指数](solutions/array&string/274.cpp)

### [380. O(1)时间插入、删除和获取随机元素](solutions/array&string/380.cpp)
- 数组+哈希表结合，利用数组下标实现随机访问，利用哈希表快速定位元素

### [238. 除了自身以外数组的乘积](solutions/array&string/238.cpp)
- 双向一次遍历

### [134. 加油站](solutions/array&string/134.cpp)
- 如果从`start`出发到不了`i+1`，那么`start...i`都不可能是起点
- 贪心算法，维护剩余油量

### [135. 分发糖果](solutions/array&string/135.cpp)
- 贪心算法，两次线性扫描

### [42. 接雨水](solutions/array&string/042.cpp)
- 维护左右指针，哪边的高度小就移动哪边，同时维护左边最大高度和右边最大高度

### [13. 罗马数字转整数](solutions/array&string/013.cpp)

## 2026.07.18

### [12. 整数转罗马数字](solutions/array&string/012.cpp)

### [58. 最后一个单词的长度](solutions/array&string/058.cpp)
- 考虑边界情况处理

### [14. 最长公共前缀](solutions/array&string/014.cpp)
- 注意字符串与字符在插入中的不同处理

### [151. 反转字符串中的单词](solutions/array&string/151.cpp)
- 对字符串的不同操作

### [6. Z字形变换](solutions/array&string/006.cpp)
- 数学遍历，确保不越界


---
