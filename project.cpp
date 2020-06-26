#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
void menu(void);
void karbon(void);
void hidrojen(void);
void oxygen(void);
int main(){
	menu();	
getch();
return 0;
}
void menu(){
	int s;
	cout<<"\nmovazeneye onsore morede nazar ra entekhab konid:\n1-carbon\n2-hidrojen\n3-oxygen\n";
	cin>>s;
	if(s==1)
		karbon();
	else if(s==2)
		hidrojen();
	else if (s==3)
		oxygen();

}
void karbon(){
	float wv,wb,zv,jv,jk,f=0,mw1,r=0;
	int cv,ck;
	cout<<"\ntedade karbon vurudi ra vared konid: ";
	cin>>cv;
	cout<<"\nzaribe alkole vurudi ra vared konid: ";
	cin>>zv;
	cout<<"\njerme mulukuli alkol vurudi ra vared konid: ";
	cin>>jv;
	cout<<"\ndarsad jermie alkol vorudi ra vared konid: ";
	cin>>wv;
	cout<<"\ntedade karbon alkol khuruji ra vared konid: ";
	cin>>ck;
	cout<<"\njerme mulukulie alkol khuruji ra vared konid: ";
	cin>>jk;
	cout<<"\ndarsad jermie alkol khurujii ra vared konid: ";
	cin>>wb;
	f=(float)(((float)(1200*ck*12)/jk)*jv)/(((float)wv/100)*cv*12);
	cout<<"\nmizane khorake vurudi: "<<f;
	mw1=(float)((float)(1200*zv*jv)/jk)/0.87;
	r=(float)(mw1-((float)(wv/100)*f))/((float)wb/100);
	cout<<"\nmeghdare jaryane bargashti: "<<r;
	menu();
}
void hidrojen(){
	int hv,hk;
	float zv,wv,wb,f=0,r=0,jv,jk,mw1;
	cout<<"\ntedade hidrojen vurudi ra vared konid: ";
	cin>>hv;
	cout<<"\nzaribe alkole vurudi ra vared konid: ";
	cin>>zv;
	cout<<"\njerme mulukuli alkol vurudi ra vared konid: ";
	cin>>jv;
	cout<<"\ndarsad jermie alkol vorudi ra vared konid: ";
	cin>>wv;
	cout<<"\ntedade hidrojen alkol khuruji ra vared konid: ";
	cin>>hk;
	cout<<"\njerme mulukulie alkol khuruji ra vared konid: ";
	cin>>jk;
	cout<<"\ndarsad jermie alkol khurujii ra vared konid: ";
	cin>>wb;
	f=(float)(((float)(1200*hk*1)/jk)*jv)/(((float)wv/100)*hv*1);
	cout<<"\nmizane khorake vurudi: "<<f;
	mw1=(float)((float)(1200*zv*jv)/jk)/0.87;
	r=(float)(mw1-((float)(wv/100)*f))/((float)wb/100);
	cout<<"\nmeghdare jaryane bargashti: "<<r;
	menu();
}
void oxygen(){
	float wv,wb,zv,jv,jk,f=0,mw1,r=0;
	int ov,ok;
	cout<<"\ntedade oxygen vurudi ra vared konid: ";
	cin>>ov;
	cout<<"\nzaribe alkole vurudi ra vared konid: ";
	cin>>zv;
	cout<<"\njerme mulukuli alkol vurudi ra vared konid: ";
	cin>>jv;
	cout<<"\ndarsad jermie alkol vorudi ra vared konid: ";
	cin>>wv;
	cout<<"\ntedade oxygen alkol khuruji ra vared konid: ";
	cin>>ok;
	cout<<"\njerme mulukulie alkol khuruji ra vared konid: ";
	cin>>jk;
	cout<<"\ndarsad jermie alkol khurujii ra vared konid: ";
	cin>>wb;
	f=(float)(((float)(1200*ok*16)/jk)*jv)/(((float)wv/100)*ov*16);
	cout<<"\nmizane khorake vurudi: "<<f;
	mw1=(float)((float)(1200*zv*jv)/jk)/0.87;
	r=(float)(mw1-((float)(wv/100)*f))/((float)wb/100);
	cout<<"\nmeghdare jaryane bargashti: "<<r;
	menu();
}



