#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("qqq", "aa","b");
Tab B = Tab("ccc", "yyy","b");
Tab C = Tab("q", "u","jjj");
Tab D = Tab("xx", "www","w");
Tab E = Tab("qq", "gg","rrr");
Tab F = Tab("bbb", "qqq","ee");
Tab G = Tab("iii", "f","ee");
Tab H = Tab("cc", "q","uu");
Tab I = Tab("lll", "v","ccc");
Tab J = Tab("q", "rr","v");
Tab K = Tab("qqq", "i","eee");
Tab L = Tab("yy", "d","ggg");
Tab M = Tab("dd", "a","nnn");
Tab N = Tab("qqq", "e","sss");
Tab O = Tab("yy", "bb","lll");
Tab P = Tab("j", "kkk","ll");
Tab Q = Tab("vvv", "ddd","fff");
Tab R = Tab("jj", "n","n");
Tab S = Tab("ss", "g","ww");
Tab T = Tab("ii", "mm","gg");
Tab U = Tab("ii", "qqq","tt");
Tab V = Tab("cc", "k","mm");
Tab W = Tab("jjj", "f","b");
Tab X = Tab("ff", "eee","uu");
Tab Y = Tab("gg", "h","p");
Tab Z = Tab("p", "eee","aa");
a.newTab(A);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(B);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(C);
d.newTab(D);
a.newTab(E);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.newTab(F);
a.newTab(G);
b.changeActiveTabTo(3);
c.newTab(H);
d.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.newTab(I);
c.newTab(J);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(K);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(L);
a.newTab(M);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(N);
b.newTab(O);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(P);
d.newTab(Q);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(R);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.newTab(S);
b.moveActiveTabTo(1);
c.newTab(T);
d.moveActiveTabTo(1);
a.newTab(U);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(V);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(W);
a.changeActiveTabTo(5);
b.newTab(X);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.newTab(Y);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(Z);
d.moveActiveTabTo(5);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
a.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->getWindow(4);
brows->switchToWindow(9);
brows->closeWindow();
brows->getWindow(7);
brows->switchToWindow(0);
brows->print();
brows->closeWindow();
brows->print();
brows->getWindow(5);
brows->switchToWindow(5);
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->switchToWindow(6);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(6);
brows->print();
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(6);
brows->print();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(8);
brows->newWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(7);
brows->getWindow(2);
brows->closeWindow();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(5);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->getWindow(5);
brows->closeEmptyWindows();
brows->getWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->print();
brows->closeWindow();
brows->getWindow(2);
brows->switchToWindow(7);
brows->print();
brows->closeWindow();
brows->newWindow();
brows->getWindow(4);
brows->mergeAllWindows();
brows->getWindow(8);
brows->newWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(6);
brows->switchToWindow(3);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->getWindow(3);
brows->closeWindow();
brows->print();
brows->getWindow(1);
brows->getWindow(8);
brows->closeEmptyWindows();
brows->switchToWindow(9);
brows->switchToWindow(4);
brows->newWindow();
brows->getWindow(4);
brows->getWindow(4);
brows->switchToWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(3);
delete brows;
}
	return 0;
};