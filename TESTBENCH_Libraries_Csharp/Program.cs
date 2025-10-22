
namespace Avril_FSD
{
    static class Program
    {
        static void Main()
        {
            Console.WriteLine("TestBench SIMULATION started");//ToDo TestBench
            IntPtr _program_ServerConcurrency = (IntPtr)Avril_FSD.Library_For_Server_Concurrency.Initialise_Server_Concurrency();
            System.Console.WriteLine("created initialise server concurrency.");//TESTBENCH
            Avril_FSD.Library_For_Server_Concurrency.Initialise_Programs(_program_ServerConcurrency);

            //IntPtr _program = (IntPtr)Avril_FSD.Library_For_WriteEnableForThreadsAt_SERVERINPUTACTION.Initialise_WriteEnable();
            System.Console.WriteLine("created Library_For_LaunchEnableForConcurrentThreadsAt_SERVER.");//TESTBENCH
        }
    }
}