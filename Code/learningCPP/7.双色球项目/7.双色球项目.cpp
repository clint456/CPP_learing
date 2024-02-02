#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>

using namespace std;

//用户在控制台上输入的一个整数
int getNumberInput(){
	int input = 0;
	cin >> input;
	//输入输出流判断输入是否为int类型
	while (cin.fail())
	{
		//错误，清除输入
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		//重新输入
		cin >> input;
	}
	return input;
}

//对双色求红球部分进行冒泡排序
void sortBalls(int* balls)
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1 - i; j++)
		{
			if (balls[j] > balls[j + 1])
			{
				int temp = balls[j];
				balls[j] = balls[j + 1];
				balls[j + 1] = temp;
			}
		}
	}
}
//用户选择
int* getCustomBalls()
{	
	//在堆上创建数组：用来存6个红球，1个蓝球
	int *balls = new int[7];

	input_red_balls: //返回标志

	cout << "请输入6个红球号码： ";
	for (int i = 0; i < 6; i++) {
		balls[i] = getNumberInput();
	}
	//将红球部分排序
	sortBalls(balls);

	//红球越界问题:只需要判断两端是否越界
	if (balls[0] < 1 || balls[5]>33)
	{
		cout << "红球越界，请重新输入" << endl;
		goto input_red_balls;
	}

	//红球重复问题
	for (int i = 0; i < 6; i++)
	{
		if (balls[i] == balls[i + 1])
		{
			cout << "红球重复了，请重新输入" << endl;
			goto input_red_balls;
		}
	}
	intput_blue_balls:
	cout << "请输入一个蓝球： ";
	balls[6] = getNumberInput();
	if (balls[6] > 16 || balls[6] < 1)
	{
		cout << "；蓝球越界，请重新输入" << endl;
		goto intput_blue_balls;
	}
	return balls;
}

//机选号码
int* getRandomBalls()
{
	//定义一个数组，用来存储随机生成的双色球
	int* balls = new int[7];

	//定义数据源
	int* datapool = new int[33];
	for (int i = 0; i < 33; i++)
	{
		datapool[i] = i + 1;
	}

	//填充balls
	for (int i = 0; i < 6; i++)
	{
		//计算数据源数组的长度
		int l = 33 - i;
		//从数据源数据中获取一个随机的下标
		int randomIndex = rand() % l;
		//从数据源数组中，通过随机下标，获取到元素，并且添加到balls数组中
		balls[i] = datapool[randomIndex];
		//更新数据源
		int* tmp = new int[l - 1];//新的数组需要移除已经装载的元素
		for (int i1 = 0, i2 = 0; i1 < l; i1++)
		{
			if (i1 == randomIndex) //跳过当前的index
			{
				continue;
			}
			tmp[i2++] = datapool[i1];
		}
		
		//释放datapool指向的内存
		delete[] datapool;
		//防止datapool指向无效内存
		datapool = nullptr;
		//修改地址指向
		datapool = tmp;
	}
	
	//将红球号码排序
	sortBalls(balls);
	//随机数范围是16，丛1开始
	balls[6] = rand() % 16 + 1;
	return balls;
}

//格式化输出结果
string descBalls(int* balls)
{
	//用于字符拼接
	stringstream ss;
	ss << "红球：";
	for (int i = 0; i < 7; i++)
	{
		//setw(占位数）按空格补
		//setfill('ch'）不够前面setw(占位数），就补上'ch'
		ss << setw(2) << setfill('0') << balls[i];
		if (i < 5) {
			ss << ", ";
		}
		else if (i == 5)
		{
			ss << ", 蓝球: ";
		}
	}
	return ss.str();
}

//比对两注双色球，确定你中了几等奖
int getTicketLeve(int* userBalls, int* systemBalls)
{
	//定义两个变量，分别用来记录红球中奖的数量和蓝球中奖的数量
	int redCount = 0, blueCount = 0;
	//核对红球中奖的数量
	for (int u = 0; u < 6; u++)
	{
		for(int s = 0;s < 6; s++)
			// 红球已经排好序，所以直接比较即可
			if (userBalls[u] == systemBalls[s])
			{
				redCount++;
				break;
			}
	}
	//核对蓝球中奖的数量
	//如果中奖就是1，没有就是0
	blueCount = userBalls[6] == systemBalls[6];

	//确定奖项
	if (redCount == 6 && blueCount ==1)
	{
		return 1;
	}
	else if(redCount == 6 && blueCount == 0)
	{
		return 2;
	}
	else if (redCount == 5 && blueCount == 1)
	{
		return 3;
	}
	else if (redCount + blueCount == 5)
	{
		return 4;
	}
	else if ((redCount + blueCount) == 4)
	{
		return 5;
	}
	//前面的条件都不满足的情况下，blueCount==1
	else if (blueCount == 1)
	{
		return 6;
	}
	return 7;
}

int getMoney(int level)
{
	switch (level)
	{
	case 1:
		return 5000000;
	case 2:
		return 800000;
	case 3:
		return 3000;
	case 4:
		return 200;
	case 5:
		return 10;
	case 6:
		return 5;
	case 7:
		return 0;
	default:
		break;
	}
}
void playGame()
{	//定义变量，用来存储用户的操作哦
	int userChoice = -1;

	//定义一个指针，指向用户选择的双色球
	int* userBalls = nullptr;

	//定义一个bool_flag，记录游戏是否需要继续
	bool flag = 1;
	while (flag)
	{
		cout << "********************************" << endl;
		cout << "*请输入您的选择：              *" << endl;
		cout << "* 1.自选号码                   *" << endl;
		cout << "* 2.机选号码                   *" << endl;
		cout << "* 0.不玩了                     *" << endl;
		cout << "********************************" << endl;
		cout << "请输入您的选择：1.自选号码 2.机选号码 0.不玩了" << endl;
		
		userChoice = getNumberInput();
		

		switch (userChoice)
		{
		case 0:
			flag = 0;
			break;

		case 1:
			 userBalls = getCustomBalls();
			break;

		case 2:
			userBalls = getRandomBalls();
			break;

		default:
			continue;
		}
		
		//输入用户选择的双色球是什么
		cout << "用户的选择是: " << descBalls(userBalls) << endl;

		//输出中将号码是什么
		int* systemBalls = getRandomBalls();
		cout << "中奖的号码是： " << descBalls(systemBalls) << endl;

		//中奖结果
		int level = getTicketLeve(userBalls, systemBalls);
		//计算中奖金额
		int money = getMoney(level);

		if (level == 7) cout << " 很遗憾，您没有中奖，再接再厉！" << endl;
		else cout << "恭喜您，中了" << level << "等奖，奖金：" << money << "元"<<endl;
		
		system("pause");
		system("cls");
	}

}



int main()
{
	playGame();
	return 0;
}