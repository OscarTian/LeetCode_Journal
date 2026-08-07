# LeetCode_Journal Classic150
*As the title says.*  
*This project is written entirely in C++.*

## 2026.02.01

### [88. 合并两个有序数组](solutions/arrays-strings/088.cpp)
- 逆向操作避免数据覆盖
- 只需处理完`nums2`即可结束

### [27. 移除元素](solutions/arrays-strings/027.cpp)
- 快慢指针实现原地修改
- 注意边界条件

### [26. 删除有序数组中的重复项](solutions/arrays-strings/026.cpp)
- 比较`nums[k]`与`nums[p]`
- 发现新元素时先移动`k`再赋值

## 2026.07.14

### [80. 删除有序数组中的重复项 II](solutions/arrays-strings/080.cpp)
- 采用快慢指针
- 考虑边界情况
- 只需考虑相隔一位重复情况

### [169. 多数元素](solutions/arrays-strings/169.cpp)
- 摩尔投票法
- 不同元素间"两两抵消",到最后剩下的必然是多数元素

### [189. 轮转数组](solutions/arrays-strings/189.cpp)
- 考虑边界情况

### [121. 买卖股票的最佳时机](solutions/arrays-strings/121.cpp)
- 一次遍历,更新目前最低买入价和历史最高利润

### [122. 买卖股票的最佳时机 II](solutions/arrays-strings/122.cpp)
- 注意`for`循环的现代写法`auto x`

### [55. 跳跃游戏](solutions/arrays-strings/055.cpp)

## 2026.07.15

### [45. 跳跃游戏 II](solutions/arrays-strings/045.cpp)
- 贪心算法捕捉最远边界,到达边界时更新`step`

### [274. H指数](solutions/arrays-strings/274.cpp)

### [380. O(1)时间插入、删除和获取随机元素](solutions/arrays-strings/380.cpp)
- 数组+哈希表结合,利用数组下标实现随机访问,利用哈希表快速定位元素

### [238. 除了自身以外数组的乘积](solutions/arrays-strings/238.cpp)
- 双向一次遍历

### [134. 加油站](solutions/arrays-strings/134.cpp)
- 如果从`start`出发到不了`i+1`,那么`start...i`都不可能是起点
- 贪心算法,维护剩余油量

### [135. 分发糖果](solutions/arrays-strings/135.cpp)
- 贪心算法,两次线性扫描

### [42. 接雨水](solutions/arrays-strings/042.cpp)
- 维护左右指针,哪边的高度小就移动哪边,同时维护左边最大高度和右边最大高度

### [13. 罗马数字转整数](solutions/arrays-strings/013.cpp)

## 2026.07.18

### [12. 整数转罗马数字](solutions/arrays-strings/012.cpp)

### [58. 最后一个单词的长度](solutions/arrays-strings/058.cpp)
- 考虑边界情况处理

### [14. 最长公共前缀](solutions/arrays-strings/014.cpp)
- 注意字符串与字符在插入中的不同处理

### [151. 反转字符串中的单词](solutions/arrays-strings/151.cpp)
- 对字符串的不同操作

### [6. Z字形变换](solutions/arrays-strings/006.cpp)
- 数学遍历,确保不越界

### [28. 找出字符串中第一个匹配项的下标](solutions/arrays-strings/028.cpp)
- 利用`find`函数快速实现
- 维护前缀表避免主串指针的回退

### [68. 文本左右对齐](solutions/arrays-strings/068.cpp)
- 贪心算法,维护大量信号变量

### [125. 文本左右对齐](solutions/two-pointers/125.cpp)
- 使用双指针向中间扫描
- `isalnum`判断是否为字母或数字
- `tolower`将字符统一成小写

### [392. 判断子序列](solutions/two-pointers/392.cpp)
- 有序列表记录`t`中各字符出现的所有位置
- 对`s`中各字符,在对应列表里二分查找第一个大于等于当前位置的位置,更新当前指针

## 2026.07.29

### [167. 两数之和 II](solutions/two-pointers/167.cpp)
- 双指针法

### [209. 长度最小的子数组](solutions/sliding-window/209.cpp)
- 滑动窗口法

### [36. 有效的数独](solutions/matrix/036.cpp)
- 矩阵问题

### [383. 赎金信](solutions/hash-table/383.cpp)
- 哈希表"键-值"映射

## 2026.08.02

### [49. 字母异位词分组](solutions/hash-table/049.cpp)
- `reserve`函数用于预分配内存
- `sort`函数对`string`类或`char`类数组排序
- `move`函数避免拷贝
- 类型推导关键字`auto`

### [228. 汇总区间](solutions/interval/228.cpp)
- `to_string`函数

### [56. 合并区间](solutions/interval/056.cpp)

### [20. 有效的括号](solutions/stack/020.cpp)
- `vector`类的`back`与`pop_back`函数

### [71. 简化路径](solutions/stack/071.cpp)
- `stringstream`函数配合`getline`函数流式处理
- `empty`函数

## 2026.08.03

### [141. 环形链表](solutions/linked-list/141.cpp)
- 指针的使用和处理

### [2. 两数相加](solutions/linked-list/002.cpp)
- 虚拟头节点简化操作
- 区别对象与指针

### [104. 二叉树的最大深度](solutions/binary-tree/104.cpp)
- 用递归方法解决

## 2026.08.04

### [105. 从前序与中序遍历序列构造二叉树](solutions/binary-tree/105.cpp)
- 递归

### [637. 二叉树的层平均值](solutions/binary-tree-level-order/637.cpp)
- `queue`类型的`push`,`empty`,`pop`,`front`函数

### [199. 二叉树的右视图](solutions/binary-tree-level-order/199.cpp)
- pair类型,与stack类型的`push`,`empty`,`pop`,`top`函数
- dfs递归

### [530. 二叉搜索树的最小绝对差](solutions/binary-search-tree/530.cpp)
- auto类与dfs递归
- 中序遍历

### [230. 二叉搜索树中第K小的元素](solutions/binary-search-tree/230.cpp)
- 递归
- 中序遍历与栈

### [200. 岛屿数量](solutions/graph/200.cpp)
- dfs遍历

### [909. 蛇梯棋](solutions/breadth-first-search/909.cpp)
- bfs层序遍历


---
