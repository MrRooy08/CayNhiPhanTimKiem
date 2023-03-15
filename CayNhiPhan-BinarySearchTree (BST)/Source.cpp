//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//struct node
//{
//	int data;
//	node* left;
//	node* right;
//};
//
//typedef node* NODEPTR;
//typedef NODEPTR BST;
//
//void khoiTao(BST &tree)
//{
//	tree = NULL;
//}
//
//NODEPTR taoNode(int x)
//{
//	NODEPTR p = new node;
//	p->data = x;
//	p->left = NULL;
//	p->right = NULL;
//	return p;
//}
//
//void themCay(BST& tree, int x)
//{
//	if (tree == NULL)
//	{
//		tree = taoNode(x);
//	}
//	else
//	{
//		if (x == tree->data)
//		{
//			cout << "\n Co Node Roi ";
//			return;
//		}
//		else
//		{
//			if (x < tree->data)
//			{
//				themCay(tree->left, x);
//			}
//			else
//			{
//				themCay(tree->right, x);
//			}
//		}
//	}
//}
//
//void nhap(BST& tree)
//{
//	int x;
//	while (1)
//	{
//		cout << "\n Nhap Gia Tri: (-99 De Thoat)"; cin >> x;
//		if (x == -99) break;
//		themCay(tree, x);
//	}
//}
//
//void gotoxy(short x, short y)
//{
//	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos;
//	pos.X = x - 1;
//	pos.Y = y - 1;
//	SetConsoleCursorPosition(hCon, pos);
//}
//
//void soDoCay(BST tree, int x, int y, int d)
//{
//	if (tree != NULL)
//	{
//		gotoxy(x, y);
//		cout << "(" << tree->data << ")";
//		if (tree->left != NULL)
//		{
//			gotoxy(x + 1, y + 1);
//			cout << '|';
//			for (int i = x - d / 2 + 2; i <= x + 2; i++)
//			{
//				gotoxy(i, y + 2);
//				cout << '-';
//			}
//			soDoCay(tree->left, x - d / 2, y + 3, d / 2);
//		}
//		if (tree->right != NULL)
//		{
//			gotoxy(x + 1, y + 1);
//			cout << '|';
//			for (int i = x + 2; i <= x + d / 2 + 2; i++)
//			{
//				gotoxy(i, y + 2);
//				cout << '-';
//			}
//			soDoCay(tree->right, x + d / 2, y + 3, d / 2);
//		}
//	}
//}
//
//void xuatNLR(BST& tree)
//{
//	if (tree != NULL)
//	{
//		cout << tree->data << " ";
//		xuatNLR(tree->left);
//		xuatNLR(tree->right);
//	}
//}
//
//void xuatLNR(BST& tree)
//{
//	if (tree != NULL)
//	{
//		xuatLNR(tree->left);
//		cout << tree->data<<" ";
//		xuatLNR(tree->right);
//	}
//}
//
//void xuatLRN(BST& tree)
//{
//	if (tree != NULL)
//	{
//		xuatLRN(tree->left);
//		xuatLRN(tree->right);
//		cout << tree->data << " ";
//	}
//}
//
//void demNodeCayTrong(BST tree, int& dem)
//{
//	if (tree != NULL)
//	{
//		demNodeCayTrong(tree->left, dem);
//		if (tree->left != NULL || tree->right != NULL)
//			dem++;
//		demNodeCayTrong(tree->right, dem);
//	}
//}
//
//void demNodeMotNhanh(BST tree, int& dem)
//{
//	if (tree != NULL)
//	{
//		if (tree->left != NULL && tree->right == NULL || tree->left == NULL && tree->right != NULL)
//			demNodeMotNhanh(tree->left, dem);
//			demNodeMotNhanh(tree->right, dem);
//			dem++;
//	}
//}
//
//int tinhChieuCaoCuaCay(BST tree)
//{
//	int a, b;
//	if (tree == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		a = tinhChieuCaoCuaCay(tree->left);
//		b = tinhChieuCaoCuaCay(tree->right);
//		if (a > b)
//		{
//			return a + 1;
//		}
//		else
//		{
//			return b + 1;
//		}
//	}
//}
//
//int demLe(BST tree)
//{
//	if (tree != NULL)
//	{
//		int a = demLe(tree->left);
//		int b = demLe(tree->right);
//		if (tree->data % 2 != 0)
//			return 1 + a + b;
//		return a + b;
//	}
//	return 0;
//}
//
//void tongCacPhanTuGiaTriCuaCay(BST tree, int& tong)
//{
//	if (tree != NULL)
//	{
//		tongCacPhanTuGiaTriCuaCay(tree->left, tong);
//		tongCacPhanTuGiaTriCuaCay(tree->right, tong);
//		tong += tree->data;
//	}
//}
//
//int tongCay(BST tree)
//{
//	if (tree != NULL)
//	{
//		int a= tongCay(tree->left);
//		int b= tongCay(tree->right);
//		return tree->data+a+b;
//	}
//	return 0;
//}
//
//void sumCay(BST tree, int &tong)
//{
//	if (tree != NULL)
//	{
//		sumCay(tree->left, tong);
//		sumCay(tree->right, tong);
//		tong += tree->data;
//	}
//}
//
//int tongNutLa(BST tree)
//{
//	if (tree != NULL)
//	{
//		int a = tongNutLa(tree->left);
//		int b = tongNutLa(tree->right);
//		if (tree->left == NULL && tree->right == NULL)
//			return tree->data + a + b;
//		return a + b;
//	}
//	return 0;
//}
//
//void sumNutLa(BST tree, int& tong)
//{
//	if (tree != NULL)
//	{
//		if (tree->left == NULL && tree->right == NULL)
//			tong += tree->data;
//			sumNutLa(tree->left, tong);
//			sumNutLa(tree->right, tong);
//	}
//}
//
//NODEPTR timNode(BST tree, int x)
//{
//	NODEPTR p = tree;
//	while (p != NULL)
//	{
//		if (p->data == x)
//		{
//			return p;
//		}
//		else
//		{
//			if (p->data > x) p = p->left;
//			else p = p->right;
//		}
//	}
//	return p;
//}
//
//
//NODEPTR timCay(BST tree, int a)
//{
//	// Kiểm tra cây khác rỗng 
//	if (tree != NULL)
//	{
//		// Nếu Node gốc bằng giá trị a thì return tree
//		if (tree->data == a)
//		{
//			return tree;
//		}
//		else if (a < tree->data) 
//		{
//			return timCay(tree->left, a); // Nếu nút a bé hơn nút gốc thì gọi lại đệ quy bên trái 
//		}
//		else  return timCay(tree->right, a); // Nếu nút a lớn hơn nút gốc thì gọi lại đệ quy bên phải
//	}
//	//Nếu cây rỗng hoặc không tìm thấy sẽ return NULL
//	return NULL;
//}
//
//void removeNode(BST& r, int a) {
//	if (r == NULL) return;
//
//	if (a < r->data)
//	{
//		removeNode(r->left, a);
//	}
//	else if (a > r->data) 
//	{
//		removeNode(r->right, a);
//	}
//	else
//	{
//		// Node has 0 or 1 child
//		if (r->left == NULL) {
//			BST temp = r;
//			r = r->right;
//			delete temp;
//		}
//		else if (r->right == NULL) {
//			BST temp = r;
//			r = r->left;
//			delete temp;
//		}
//		else {
//			// Node has 2 children
//			BST temp = r->right;
//			while (temp->left != NULL)   temp = temp->left;
//			r->data = temp->data;
//			removeNode(r->right, temp->data);
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int chon = 0;
//	BST tree=NULL;
//	/*khoiTao(tree);*/
//	do
//	{
//		cout << "\n\n\t\t1. Nhap Gia Tri Cay. ";
//		cout << "\n\n\t\t2. Xuat So Do Cay.";
//		cout << "\n\n\t\t3. Xuat NODE LEFT RIGHT (NLR).";
//		cout << "\n\n\t\t4. Xuat LEFT NODE RIGHT (LNR).";
//		cout << "\n\n\t\t5. Xuat LEFT RIGHT NODE (LRN).";
//		cout << "\n\n\t\t6. Dem Node Cay Trong.";
//		cout << "\n\n\t\t7. Dem Node Mot Nhanh.";
//		cout << "\n\n\t\t8. Tinh Chieu Cao Cua Cay.";
//		cout << "\n\n\t\t9. Xuat NODE LEFT  (LEFT).";
//		cout << "\n\n\t\t10. Tinh Tong Cua Cay.";
//		cout << "\n\n\t\t11. Tinh Tong Nut La.";
//		cout << "\n\n\t\t12. Tim NODE X Trong Cay.";
//		cout << "\n\n\t\t13. Xoa Cay.";
//		cout << "\n\n\t\t0. Dung Lai.";
//		cout << "\n\t\t Nhap 1 Gia Tri So Nguyen De Thuc Thi: "; cin >> chon;
//		switch (chon)
//		{
//		case 1:
//			system("cls");
//			nhap(tree);
//			break;
//		case 2:
//			system("cls");
//			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n";
//			cout << "\n\n\n\n\n\n\n\n\n\n Cay Ban Vua Tao La: ";
//			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
//			soDoCay(tree, 40, 1, 40);
//			break;
//		case 3:
//			system("cls");
//			cout << "\n Xuat NODE LEFT RIGHT (NLR): ";
//			xuatNLR(tree);
//			break;
//		case 4:
//			system("cls");
//			cout << "\n Xuat LEFT NODE RIGHT (LNR):";
//			xuatLNR(tree);
//			break;
//		case 5:
//			system("cls");
//			cout << "\n Xuat LEFT RIGHT NODE (LRN):";
//			xuatLRN(tree);
//			break;
//		case 6:
//			system("cls");
//			cout << "\n Dem Node Cay Trong: ";
//			int dem;
//			dem = 0;
//			demNodeCayTrong(tree, dem);
//			cout<<dem;
//			break;
//		case 7:
//			system("cls");
//			cout << "\n Dem Node Mot Nhanh: ";
//			dem = 0;
//			demNodeMotNhanh(tree, dem);
//			cout << dem;
//			break;
//		case 8:
//			system("cls");
//			int gt;
//			gt = tinhChieuCaoCuaCay(tree);
//			cout << "\n Chieu Cao Cua Cay La: " << gt;
//			break;
//		case 9:
//			system("cls");
//			gt = demLe(tree);
//			cout << " Dem Le: " << gt;
//			break;
//		case 10:
//			system("cls");
//			int tong;
//			gt = tongCay(tree);
//			cout << "\n Tong Cua Cay La: " << gt;
//			tong = 0;
//			tongCacPhanTuGiaTriCuaCay(tree, tong);
//			cout << "\n (void) tong cay: " << tong;
//			break;
//		case 11:
//			system("cls");
//			gt = tongNutLa(tree);
//			cout << "\n Tong Nut La: " << gt;
//			tong = 0;
//			sumNutLa(tree, tong);
//			cout << "\n Tong Nut La (void):" << tong;
//			break;
//		case 12:
//			system("cls");
//			NODEPTR p;
//			p= timCay(tree, 75);
//			cout << " " << p->data;
//			break;
//		case 13:
//			system("cls");
//			int x;
//			cout << "\n Nhap Gia Tri: "; cin >> x;
//			removeNode(tree, x);
//			soDoCay(tree, 40, 1, 40);
//			break;
//		default: 
//			break;
//		}
//
//	} while (chon!=0);
//
//	return 0;
//}

#include <iostream>
using namespace std;

//khởi tạo struct
struct Node
{
	int data;
	Node* left;
	Node* right;
};

// tạo node
Node* newNode(int x)
{
	Node* p = new Node();
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}

// thêm node 
Node* insert(Node* node, int x)
{
	if (!node) return newNode(x);

	if (x < node->data)
	{
		node->left = insert(node->left, x);
	}
	else if (x > node->data)
	{
		node->right = insert(node->right, x);
	}
	return node;

}

void nhap(Node*& node)
{
	int x;
	do
	{
		cout << "\n Nhap Gia Tri: "; cin >> x;
		if (x == -99) break;
		node = insert(node, x);
	} while (1);
}

void xuat(Node* node)
{
	if (node != NULL)
	{
		cout << " " << node->data;
		xuat(node->left);
		xuat(node->right);
	}
}

Node* findNode(Node* node, int x)
{
	if (node == NULL) return NULL;

	else if (node->data == x)
	{
		return node;
	}
	else if (x < node->data)
	{
		node->left = findNode(node->left, x);
	}
	else if (x > node->data)
	{
		node->right = findNode(node->right, x);
	}
}

Node* deleteNode(Node* node, int x)
{
	if (node == NULL) return NULL;

	if (x < node->data)
	{
		node->left = deleteNode(node->left, x);
	}
	else if (x > node->data)
	{
		node->right = deleteNode(node->right, x);
	}
	else
	{
		if (node->left == NULL || node->right == NULL)
		{
			Node* temp = node->left ? node->left : node->right;
			if (temp == NULL)
			{
				temp = node;
				node = NULL;
				delete temp;
			}
			else
			{
				*node = *temp;
				delete temp;
			}
		}
		else
		{
			Node* temp = node->left;
			while (temp->right != NULL) temp = temp->right;
			node->data = temp->data;
			node->left = deleteNode(node->left, x);
		}
	}
	return node;
}

// Viết hàm trả về chiều cao của 1 node trên cây nhị phân tìm kiếm
int Height(Node* node)
{
	if (node == NULL) return NULL;
	return  1 + Height(node->left) + Height(node->right);
}

int sumTree(Node* node)
{
	if (node != NULL)
	{
		int a = sumTree(node->left);
		int b = sumTree(node->right);
		return node->data + a + b;
	}
	return 0;
}

//Kiểm tra số nguyên tố 
int kiemTraSnt(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return 0;
	}
	return 1;
}

void PrintSntTree(Node* node)
{
	if (node != NULL)
	{
		if (kiemTraSnt(node->data))
		{
			cout << " " << node->data;
		}
		PrintSntTree(node->left);
		PrintSntTree(node->right);
	}
}

int traVeSoLuongGiaTriLe(Node* node)
{
	if (node != NULL)
	{
		int a = traVeSoLuongGiaTriLe(node->left);
		int b = traVeSoLuongGiaTriLe(node->right);
		if (node->data % 2 == 1)
			return 1 + a + b;
		return a + b;
	}
	return 0;
}

int demSoLuongNode(Node* node)
{
	if (node != NULL)
	{
		int a = demSoLuongNode(node->left);
		int b = demSoLuongNode(node->right);
		return 1 + a + b;
		return a + b;
	}
	return 0;
}

void tachCayNhiPhan(Node* node, Node*& chan, Node*& le) {
	if (node == NULL) {
		return;
	}

	if (node->data % 2 == 0) { // Nếu khóa của nút là số chẵn
		if (chan == NULL) {
			chan = newNode(node->data); // Tạo nút mới và gán vào cây chẵn
		}
		else {
			  chan = insert(chan, node->data); // Thêm nút vào cây chẵn
		}
	}
	else { // Nếu khóa của nút là số lẻ
		if (le == NULL) {
			le = newNode(node->data); // Tạo nút mới và gán vào cây lẻ
		}
		else {
			le = insert(le, node->data); // Thêm nút vào cây lẻ
		}
	}

	tachCayNhiPhan(node->left, chan, le); // Duyệt qua cây con trái
	tachCayNhiPhan(node->right, chan, le); // Duyệt qua cây con phải
}


void displayMenu()
{
	cout << "\n------------------------------" << endl;
	cout << "\n1. Nhap Node.";
	cout << "\n2. Xuat Node.";
	cout << "\n3. Xoa Node.";
	cout << "\n4. Tra Ve Chieu Cao Cua 1 node ";
	cout << "\n5. Tong Cac Gia Tri Cay. ";
	cout << "\n6. Tim Gia Tri Co Trong Cay. ";
	cout << "\n7. Xuat Cac Khoa La SNT Trong Cay.";
	cout << "\n8. Tra Ve So Luong Gia Tri Le. ";
	cout << "\n9. Dem So Luong Node Co Trong Cay. ";
	cout << "\n10. Tach Cay Nhi Phan. ";
	cout << "\n0. Dung Lai.";
	cout << "\n Nhap 1 So Nguyen De Lua Chon: ";
	cout << "\n------------------------------" << endl;
}

int main()
{
	Node* node = NULL;
	int choice;
	//bool isRunning = true;
	do
	{
		displayMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			nhap(node);
			break;
		case 2:
			system("cls");
			xuat(node);
			break;
		case 3:
			system("cls");
			int x; cout << "\n Nhap X Muon Xoa: "; cin >> x;
			node = deleteNode(node, x);
			xuat(node);
			break;
		case 4:
			system("cls");
			int giaTri;
			giaTri = Height(node);
			cout << " Chieu Cao Cua Cay La: " << giaTri;
			break;
		case 5:
			system("cls");
			giaTri = sumTree(node);
			cout << "\n Tong Gia Tri Cua Cay La: " << giaTri;
			break;
		case 6:
			system("cls");
			cout << "\n Nhap X Muon Tim: "; cin >> x;
			node = findNode(node, x);
			if (node == NULL)
			{
				cout << "\n Khong Tim Thay.";
			}
			else cout << "\n Da Tim Thay " << node->data;
			break;
		case 7:
			system("cls");
			cout << "\n So Nguyen To Trong Cay: ";
			PrintSntTree(node);
			break;
		case 8:
			system("cls");
			giaTri = traVeSoLuongGiaTriLe(node);
			cout << " So Luong Gia Tri Le: " << giaTri;
			break;
		case 9:
			system("cls");
			giaTri = demSoLuongNode(node);
			cout << "\n Tong Node Co Trong Cay La: " << giaTri;
			break;
		case 10:
			system("cls");
			Node* chan , * le ;
			chan = NULL, le = NULL;
			tachCayNhiPhan(node, chan, le);
			cout << "\n Cay Chan: ";
			xuat(chan);
			cout << "\n Cay Le: ";
			xuat(le);
			break;
		default:
			cout << "\n Nhap Khong Hop Le Vui Long Nhap Lai. ";
			break;
		}
	} while (choice != 0);
	return 0;
}

