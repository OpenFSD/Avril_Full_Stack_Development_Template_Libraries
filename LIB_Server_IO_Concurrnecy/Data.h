#pragma once

namespace Avril_FSD
{
    class Data
    {
    public:
        Data();
        virtual ~Data();
        void Initialise(__int8 number_Implemented_Cores);
        void Initialise_Control();
        class Data_Control* Get_Data_Control();

        void Initialise_GameInstance();
        class GameInstance* Get_GameInstance();
        static __int8 BoolToInt(bool bufferSide);
        
        void Flip_Input_DoubleBuffer();
        void Flip_Output_DoubleBuffer();
        class Input* GetBuffer_InputFrontDouble();
        class Input* GetBuffer_InputBackDouble();
        class Input* Get_InputRefferenceOfCore(__int8 concurrent_coreId);
        class Output* GetBuffer_OutputFrontDouble();
        class Output* GetBuffer_OutputBackDouble();
        class Output* Get_OutputRefferenceOfCore(__int8 concurrent_coreId);
        class Input* Get_New_InputBuffer();
        class Output* Get_New_OutputBuffer();
        bool GetState_InputBuffer();
        bool GetState_OutputBuffer();
        std::vector<class Avril_FSD::Input*>* Get_Stack_InputPraise();
        std::vector<class Avril_FSD::Output*>* Get_Stack_OutputPraise();
        
        class User_I* Get_User_I();
        class User_O* Get_User_O();

    protected:

    private:
        static void Set_GameInstance(class Avril_FSD::GameInstance* gameInstance);
        static void Set_Data_Control(class Avril_FSD::Data_Control* data_Control);
    //buffers
        static void Set_EmptyBuffer_Input(class Avril_FSD::Input* emptyBuffer_Input);
        static void Set_EmptyBuffer_Output(class Avril_FSD::Output* emptyBuffer_Output);
        static void Set_Buffer_InputDouble(bool state, class Avril_FSD::Input* buffer_InputDouble);
        static void Set_Buffer_InputReference_ForCore(__int8 index, class Avril_FSD::Input* buffer_InputReference_ForCore);
        static void Set_Buffer_OututDouble(bool state, class Avril_FSD::Output* buffer_OututDouble);
        static void Set_Buffer_OutputReference_ForCore(__int8 index, class Avril_FSD::Output* buffer_OutputReference_ForCore);
        static void Set_Stack_InputPraise(std::vector<class Avril_FSD::Input*>* stack_InputPraise);
        static void Set_Stack_OutputPraise(std::vector<class Avril_FSD::Output*>* stack_OutputPraise);
    //buffer sub sets
        static void Set_User_I(class Avril_FSD::User_I* user_Input);
        static void Set_User_O(class Avril_FSD::User_O* user_Output);

        void Set_InputRefferenceOfCore(__int8 concurrent_coreId, class Avril_FSD::Input* value_Input);
        void Set_OutputRefferenceOfCore(__int8 concurrent_coreId, class Avril_FSD::Output* value_Output);

        static void Set_state_InBufferToWrite(bool value);
        static void Set_state_OutBufferToWrite(bool value);
    };
}
