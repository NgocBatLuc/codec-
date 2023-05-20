#include<iostream>
using namespace std;
class KS
{
	private:
		string mhd, mkh, tkh, dc, dv;
	protected:
		virtual double dichvuanuong()
		{
			return 0;
		}
		virtual double dichvuphongnghi()
		{
			return 0;
		}
	public:
		virtual double tongtien()
		{
			return ( dichvuanuong() + dichvuphongnghi() );
		}
		KS(string mhd=" ", string mkh=" ", string tkh=" ", string dc=" ", string dv=" ")
		{
			this->mhd=mhd;
			this->mkh=mkh;
			this->tkh=tkh;
			this->dc=dc;
			this->dv=dv;
		}
		~KS() {};
		virtual void nhap(istream & is)
		{
			cout<<"\nNhap ma hoa don : ";
			is>>mhd
			cout<<"\nNhap ma khach hang : ";
			is>>mkh;
			cout<<"\nNhap ten khach hang : ";
			is>>tkh;
			cout<<"\nNhap dia chi : ";
			is>>dc;
			cout<<"\nNhap dich vu : ";
			is>>dv;
		}
		virtual void xuat()
		{
			cout<<"\n Ma hoa don : "<<mhd;
			cout<<"\n Ma khach hang : "<<mkh;
			cout<<"\n Ten khach hang : "<<tkh;
			cout<<"\n Dia chi : "<<dc;
			cout<<"\Dich vu : "<<dv;
		}
};
class DVanuong : public KS
{
	private:
		int sokhach;
		float dongia1 , tienthem;
	protected:
		virtual void nhap(istream & is)
		{
			KS::nhap(is);
			cout<<"\n Nhap so khach : ";
			is>>sokhach;
			cout<<"\nNhap don gia : ";
			is>>dongia1;
			cout<<"\nNhap tien them : ";
			is>>tienthem;
		}
		virtual void xuat()
		{
			KS::xuat();
			cout<<"\n So khach hang : "<<sokhach;
			cout<<"\n Don gia : "<<dongia1;
			cout<<"\n Tien them : "<<tienthem;
		}
		double dichvuanuong()
		{
			if(sokhach > 50 )
			{
				return tienanuong = sokhach * dongia1*9,5 +tienthem;
			}
			else return tienanuong = sokhach * dongia1 + tienthem;
		}
};
class DVphongnghi : public KS
{
	private:
		int songay;
		float dongia2;
	protected:
		virtual void nhap(istream & is)
		{
			KS::nhap(is);
			cout<<"\nNhap so ngya thue : "; 
			is>>songay;
			cout<<"\nNhap don gia : ";
			is>>dongia2;
		}
		virtual void xuat()
		{
			KS::xuat();
			cout<<"\nSo ngay thue : "<<songay;
			cout<<"\n Don gia : "<<dongia2;
		}
		double dichvuphongnghi()
		{
			if(songay >3 )
			{
				return tienphong= 3 * dongia + (songay-1)*dongia*0,8;
			}
			else return tienphong = dongia * songay;
		}
		
};
int main()
{
	int n;
	
}