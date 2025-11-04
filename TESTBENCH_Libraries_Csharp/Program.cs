
namespace Avril_FSD
{
    static class Program
    {
        private static IntPtr _program_ConcurrentThreads_CLINET;
        private static IntPtr _program_IO_SERVER;
        private static IntPtr _program_WriteEnable_CLIENT_IA;
        private static IntPtr _program_WriteEnable_CLIENT_OR;
        private static IntPtr _program_WriteEnable_SERVER_IA;
        private static IntPtr _program_WriteEnable_SERVER_OS;

        static void Main()
        {
            Console.WriteLine("TestBench SIMULATION started");//ToDo TestBench
//Server                                                          //Server
            _program_IO_SERVER = Avril_FSD.Library_For_Server_Concurrency.Initialise_Server_Concurrency();
            System.Console.WriteLine("started initialise server concurrency.");//TESTBENCH
            Avril_FSD.Library_For_Server_Concurrency.Initialise_Programs(_program_IO_SERVER);
            System.Console.WriteLine("created Library_For_Server_Concurrency.");//TESTBENCH

//Client
            _program_WriteEnable_CLIENT_IA = Avril_FSD.Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION.Initialise_WriteEnable();
            System.Console.WriteLine("created Library_For_WriteEnableForThreadsAt_CLIENTINPUTACTION.");//TESTBENCH

            _program_WriteEnable_CLIENT_OR = Avril_FSD.Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.Initialise_WriteEnable();
            System.Console.WriteLine("created Library_For_WriteEnableForThreadsAt_CLIENTOUTPUTRECIEVE.");//TESTBENCH

            _program_ConcurrentThreads_CLINET = Avril_FSD.Library_For_LaunchEnableForConcurrentThreadsAt_CLIENT.Initialise_LaunchEnableForConcurrentThreadsAt();
            System.Console.WriteLine("created Library_For_LaunchEnableForConcurrentThreadsAt_CLIENT.");//TESTBENCH
        }

        public static IntPtr Get_program_IO_SERVER()
        {
            return _program_IO_SERVER;
        }
    }
}