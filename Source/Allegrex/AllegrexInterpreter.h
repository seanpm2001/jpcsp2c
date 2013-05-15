/*
 * This file is part of pcsp.
 *
 * pcsp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * pcsp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with pcsp.  If not, see <http://www.gnu.org/licenses/>.
 */
namespace IntAllegrex
{
	     extern Log log;
	void Step();
	void DelaySlot();
	void Unknown();
	void J();
	void JAL();
	void BEQ();
	void BNE();
	void BLEZ();
	void BGTZ ();
	void ADDI();
	void ADDIU();
	void SLTI();
	void SLTIU();
	void ANDI();
	void ORI();
	void XORI();
	void LUI();
	void COP0();
	void COP1();
	void BEQL();
	void BNEL();
	void BLEZL();
	void BGTZL ();
	void MFIC();
	void MTIC();
	void HALT();
	void SEH();
	void BITREV();
	void WSBH();
	void WSBW();
	void EXT();
	void INS();
	void SEB();
	void LB();
	void LH();
	void LWL();
	void LW();
	void LBU();
	void LHU();
	void LWR();
	void SB();
	void SH();
	void SWL();
	void SW();
	void SWR();
	void LL();
	void LWC1();
	void LVS();
	void LVQ();
	void SC();
	void SWC1();
	void SVS();
	void SLL();
	void SRL();
	void ROTR();
	void SRA();
	void SLLV();
	void SRLV();
	void ROTRV();
	void SRAV();
	void JR();
	void JALR();
	void MOVZ();
	void MOVN();
	void SYSCALL();
	void BREAK();
	void SYNC();
	void MFHI();
	void MTHI();
	void MFLO();
	void MTLO();
	void CLZ();
	void CLO();
	void MULT();
	void MULTU();
	void DIV();
	void DIVU();
	void MADD();
	void MADDU();
	void ADD();
	void ADDU();
	void SUB();
	void SUBU();
	void AND();
	void OR();
	void XOR();
	void NOR(); 
	void SLT();
	void SLTU();
	void MAX();
	void MIN();
	void MSUB();
	void MSUBU();
	void BLTZ();
	void BGEZ();
	void BLTZL();
	void BGEZL();
	void BLTZAL();
	void BGEZAL();
	void BLTZALL();
	void BGEZALL();
	void MFC0();
	void ERET();
	void CFC0();
	void MTC0();
	void CTC0();		  
	void MFC1();
	void CFC1();
	void MTC1();
	void CTC1();
	void CVT_S_W();
	void BC1F();
	void BC1T();
	void BC1FL();
	void BC1TL();
	void ADD_S();
	void SUB_S();   
	void MUL_S();   
	void DIV_S();    
	void SQRT_S();
	void CVT_W_S();
	void ABS_S();    
	void MOV_S();    
	void NEG_S();   
	void ROUND_W_S();  
	void TRUNC_W_S();  
	void CEIL_W_S();  
	void FLOOR_W_S();  
	void C_COND_S();  
	void COP1_Unknown();
	void BVF();
	void BVT();
	void BVFL();
	void BVTL();
	void MFV();
	void MTV();
	void MFVC();
	void MTVC();
	void VADD();
	void VSUB();
	void VSBN();
	void VDIV();
	void VMUL();
	void VDOT();
	void VSCL();
	void VFPU_Unknown();
	void VHDP();
	void VDET();
	void VCRS();
	void VCMP();
	void VMIN();
	void VMAX();
	void VSLT();
	void VSCMP();
	void VSGE();
	void VMOV();
	void VNEG();
	void VABS();
	void VIDT();
	void VF2IN();
	void VI2F();
	void VWBN();
	void VSAT0();
	void VZERO();
	void VONE();
	void VSAT1();
	void VRCP();
	void VSIN();
	void VRSQ();
	void VCOS();
	void VEXP2();
	void VSQRT();
	void VLOG2();
	void VASIN();
	void VNRCP();
	void VNSIN();
	void VREXP2();
	void VRNDS();
	void VRNDF1();
	void VRNDI();
	void VRNDF2();
	void VCMOVT();
	void VF2IZ();
	void VCMOVF();
	void VF2H();
	void VH2F();
	void VSBZ();
	void VLGB();
	void VUC2I();
	void VC2I();
	void VI2UC();
	void VI2US();
	void VI2C();
	void VI2S();
	void VSRT1();
	void VBFY1();
	void VSRT2();
	void VBFY2();
	void VF2IU();
	void VOCP();
	void VFAD();
	void VSOCP();
	void VAVG();
	void VSRT3();
	void VSRT4();
	void VUS2I();
	void VS2I();
	void VMFVC();
	void VMTVC();
	void VT4444();
	void VT5650();
	void VT5551();
	void VCST();
	void VF2ID();
	void VIIM();
	void VFIM();
	void VPFXS();
	void VPFXT();
	void VPFXD();
	void LVLQ(); 
	void LVRQ();
	void VHTFM2();
	void VTFM2();
	void VTFM3();
	void VHTFM3();
	void VHTFM4();
	void VTFM4();
	void VMMOV();
	void VMZERO();
	void VMIDT();
	void VMONE();
	void VROT();
	void VMMUL();
	void VMSCL();
	void VQMUL();
	void SVLQ();
	void SVRQ();
	void SVQ();
	void SWB();
	void VNOP();
	void VSYNC();
	void VFLUSH();
	void ICACHE_FILL();
	void ICACHE_FILL_WITH_LOCK();
	void DCACHE_CREATE_DIRTY_EXCLUSIVE();
	void DCACHE_HIT_INVALIDATE();
	void DCACHE_HIT_WRITEBACK();
	void DCACHE_HIT_WRITEBACK_INVALIDATE();
	void CACHE_Unknown();
	void ICACHE_INDEX_INVALIDATE();
	void ICACHE_INDEX_UNLOCK();
	void DCACHE_FILL();
	void DCACHE_FILL_WITH_LOCK();
	void ICACHE_HIT_INVALIDATE();
	void DCACHE_INDEX_WRITEBACK_INVALIDATE();
	void DCACHE_INDEX_UNLOCK();
	void DCACHE_CREATE_DIRTY_EXCLUSIVE_WITH_LOCK();
 
}