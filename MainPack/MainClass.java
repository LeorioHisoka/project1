package MainPack;

import TheTypeOfStaff.*;

public class MainClass {

    static TheDoctors ObjD;
    static TheNurses ObjN;
    static TheRapist ObjR;

    public static void print() {
        System.out.println(ObjD.GetDepartmentOfD());
        System.out.println(ObjD.GetNameOfD());
        System.out.println(ObjD.GetNumOfD());
        System.out.println(ObjD.GeteducationOfD());
        System.out.println(ObjD.GetjoinedDateOfD());
        System.out.println(ObjD.GetrankOfD());
        System.out.println(ObjD.Getsocial_security_numberOfD());
        System.out.println(ObjD.GetspecialtyOfD());
        System.out.println(ObjN.GetNameOfD());
        System.out.println(ObjN.GetNumOfD());
        System.out.println(ObjN.GetRoleOfD());
        System.out.println(ObjN.GetSkillsOfD());
        System.out.println(ObjN.GetTypeOfD());
        System.out.println(ObjN.GetjoinedDateOfD());
        System.out.println(ObjN.GeteducationOfD());
        System.out.println(ObjN.Getward_numberOfD());
        System.out.println(ObjR.GetNameOfR());
        System.out.println(ObjR.GetSkillsOfR());
        System.out.println(ObjR.GeteducationOfR());
        System.out.println(ObjR.GetfunctionOfR());
        System.out.println(ObjR.GetjoinedDateOfR());
        System.out.println(ObjR.Getsocial_security_numberOfR());
        System.out.println(ObjR.Gettreatment_TypeOfR());

    }

    public static void main(String[] args) {
      
        ObjR = new TheRapist("TheRapistPtreatment_Type", "TheRapistPFunction", "TheRapistPSkills", "TheRapistPEducation", "TheRapistPName");
        ObjN = new TheNurses(0, 0, "TheNursesPRole", "TheNursesPSkills", "TheNursesPEducation", "TheNursesPName", "TheNursesPType");
        ObjD = new TheDoctors("TheDoctorsPdepartment", "TheDoctorsPrank", "TheDoctorsPspecialty", "TheDoctorsPEducation", "TheDoctorsPName");
        print();
    }

}
