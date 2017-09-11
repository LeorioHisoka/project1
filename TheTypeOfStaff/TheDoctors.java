package TheTypeOfStaff;

import PackOfCount.TheNumberOfStaff;
import java.util.Date;

public class TheDoctors /*extends TheNumberOfStaff*/{

    TheNumberOfStaff StaffN = new TheNumberOfStaff();
    private final String Name;
    private Date joinedDate;
    private int social_security_number;
    private final String education;
    private final String specialty;
    private final String rank;
    private final String department;

    public TheDoctors(String Pdepartment,String Prank,String Pspecialty,String PEducation, String PName) {
        this.department = Pdepartment;
        this.rank = Prank;
        this.specialty = Pspecialty;
        this.Name = PName;
        this.education = PEducation;
        StaffN.SetDoctor();
        StaffN.SetTheNumberOfAll();
    }

   
    public String GetNameOfD(){return this.Name;}
    public String GetDepartmentOfD(){return this.department;}
    public Date GetjoinedDateOfD(){return this.joinedDate;}
    public int Getsocial_security_numberOfD(){return this.social_security_number;}
    public String GeteducationOfD(){return this.education;}
    public String GetspecialtyOfD(){return this.specialty;}
    public String GetrankOfD(){return this.rank;}
    public int GetNumOfD(){return this.StaffN.GetDoctor();}
    
}
