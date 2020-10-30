using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Runtime.InteropServices;//USE DLL

namespace CSCallBCBDll
{
    class Program
    {
        [DllImport("./BCB_DLL.dll", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi, EntryPoint = "_BCBType_Count")]
        public static extern int BCBType_Count(int m, int n);

        static void Pause()
        {
            Console.Write("Press any key to continue...");
            Console.ReadKey(true);
        }

        static void Main(string[] args)
        {
            Console.WriteLine("1+2+3+...100={0}", BCBType_Count(0, 100));
            Pause();
        }
    }
}
