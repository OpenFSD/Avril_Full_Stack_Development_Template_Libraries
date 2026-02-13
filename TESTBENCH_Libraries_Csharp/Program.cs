
namespace OpenAvril
{
    static class Program
    {
        private static IntPtr _program_ConcurrentThreads_CLINET;
        private static IntPtr _program_IO_SERVER;
        private static IntPtr _program_WriteEnable_CLIENT_IA;
        private static IntPtr _program_WriteEnable_CLIENT_OR;


        static void Main()
        {
            Console.WriteLine("TestBench SIMULATION started");//ToDo TestBench
//Server                                                          //Server
            _program_IO_SERVER = OpenAvril.Library_For_Server_Concurrency.Initialise_Server_Concurrency();
            System.Console.WriteLine("started initialise server concurrency.");//TESTBENCH
            OpenAvril.Library_For_Server_Concurrency.Initialise_Programs(_program_IO_SERVER);
            System.Console.WriteLine("created Library_For_Server_Concurrency.");//TESTBENCH

//Client
            _program_WriteEnable_CLIENT_IA = OpenAvril.Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION.Initialise_WriteEnable();
            System.Console.WriteLine("created Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION.");//TESTBENCH

            _program_WriteEnable_CLIENT_OR = OpenAvril.Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.Initialise_WriteEnable();
            System.Console.WriteLine("created Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.");//TESTBENCH
        }

        public static IntPtr Get_program_IO_SERVER()
        {
            return _program_IO_SERVER;
        }
    }
}