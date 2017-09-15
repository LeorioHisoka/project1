package TheTypeOfStaff;

import PackOfCount.TheNumberOfStaff;
import java.util.Date;

public class Therapist {

    TheNumberOfStaff StaffN = new TheNumberOfStaff();
    private final String Name;
    private Date joinedDate;
    private int social_security_number;
    private final String education;
    private final String treatment_Type, function, Skills;

    public Therapist(String Ptreatment_Type, String PFunction, String PSkills, String PEducation, String PName) {
        this.treatment_Type = Ptreatment_Type;
        this.function = PFunction;
        this.Skills = PSkills;
        this.Name = PName;
        this.education = PEducation;

        StaffN.SetTherapist();
        StaffN.SetTheNumberOfAll();
    }

    public String GetNameOfR() {
        return this.Name;
    }

    public Date GetjoinedDateOfR() {
        return this.joinedDate;
    }

    public int Getsocial_security_numberOfR() {
        return this.social_security_number;
    }

    public String GeteducationOfR() {
        return this.education;
    }

    public String Gettreatment_TypeOfR() {
        return this.treatment_Type;
    }

    public String GetfunctionOfR() {
        return this.Skills;
    }

    public String GetSkillsOfR() {
        return this.Skills;
    }
}
